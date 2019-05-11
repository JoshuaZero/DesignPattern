//
// Created by st007 on 19-5-11.
//
#include <map>
#include <atomic>
#include "CKVMemOpt.h"


namespace KVOpt {
    CKVMemOpt::CKVMemOpt() {

    }

    CKVMemOpt::~CKVMemOpt() {

    }

    Vstr CKVMemOpt::get(Kstr kdata) {
        const char* st= "";
        std::map<Kstr,Vstr>::iterator iter = m_map.find(kdata);
        if(iter != m_map.end()){
            return iter->second;
        }
        return st;
    }

    void CKVMemOpt::set(Kstr kdata, Vstr vdata) {
        KVOpt::lock(&a_lock);
        std::map<Kstr,Vstr>::iterator iter = m_map.find(kdata);
        if(iter != m_map.end()){
            iter->second = vdata;
            getcurtime();
            m_curmapIter = iter;
            m_timeKV.insert(make_pair(curTime,m_curmapIter));
        }
        else {
            m_map.insert(make_pair(kdata,vdata));
            getcurtime();
            m_curmapIter = m_map.find(kdata);
            m_timeKV.insert(make_pair(curTime,m_curmapIter));
        }
        KVOpt::unlock(&a_lock);
        updateKV();
    }

    void CKVMemOpt::updateKV(int N, int T) {
        KVOpt::lock(&a_lock);
        int capSize = m_map.size();
        if (capSize > N){
            m_map.erase(m_timeKV.begin()->second);
            m_timeKV.erase(m_timeKV.begin());
        }
        std::map<time_t, std::map<Kstr, Vstr>::iterator>::iterator iter = m_timeKV.begin();
        for(; iter != m_timeKV.end(); iter++){
            getcurtime();
            if ((iter->first - curTime) >= T){
                m_map.erase(iter->second);
                m_timeKV.erase(iter);
            }
        }
        KVOpt::unlock(&a_lock);

    }

    time_t CKVMemOpt::getcurtime() {
        curTime = time(NULL);
        return curTime;
    }


} //KVOpt