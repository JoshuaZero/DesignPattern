//
// Created by st007 on 19-3-4.
//

#ifndef DESIGNPATTERN_CCONNECTPOOL_H
#define DESIGNPATTERN_CCONNECTPOOL_H

#include <iostream>
#include <vector>
#include <pthread.h>

template <class T>
class CConnectPool {
public:
    static CConnectPool<T>* get_instance(){
        static CConnectPool<T> s_instance;
        return &s_instance;
    }

    bool init(std::vector<T> connectPtrs);

    int get_connectIndex();

    T* getConnect(int index) const;

    bool returnConnectToPool(int index);

    void removeConnectFromPool(int index);

    bool replaceAliveConn(T* newconn, int index);

private:
    CConnectPool();
    ~CConnectPool();

private:
    pthread_mutex_t* m_mutex = nullptr;
    std::vector<int> m_used_index_vect ;
    std::vector<T*> m_conn_vect;
public:

};


#endif //DESIGNPATTERN_CCONNECTPOOL_H
