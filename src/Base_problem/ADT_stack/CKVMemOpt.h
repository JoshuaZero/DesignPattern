//
// Created by st007 on 19-5-11.
//

#ifndef DESIGNPATTERN_CKVMEMOPT_H
#define DESIGNPATTERN_CKVMEMOPT_H

#include <string>
#include <map>
#include <ctime>
#include <pthread.h>
#include <stdbool.h>


namespace KVOpt {

    extern int a_lock;

    int a_lock = 0;

    static bool lock(int *lock)
    {
        int tmp = 0;
        return __atomic_compare_exchange_n(lock, &tmp, 1, true , __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST);
    }
    static void unlock(int *lock)
    {
        __atomic_store_n(lock, 0, __ATOMIC_SEQ_CST);
    }


    typedef std::string Kstr;
    typedef std::string Vstr;
    static volatile int count = 0;

    class CKVMemOpt {
    public:
        CKVMemOpt();

        ~CKVMemOpt();

        Vstr get(Kstr kdata);

        void set(Kstr kdata, Vstr vdata);

    private:
        void updateKV(int N=1024, int T=3600);
        time_t getcurtime();
        void update();

    protected:


    private:
        std::map<Kstr, Vstr> m_map;
        std::map<time_t, std::map<Kstr, Vstr>::iterator, std::greater<time_t>>  m_timeKV;
        std::map<Kstr, Vstr>::iterator m_curmapIter;
        time_t curTime;
        int mutex = 0;
        int lock = 0;
        int unlock = 0;
    };

} //KVOpt
#endif //DESIGNPATTERN_CKVMEMOPT_H
