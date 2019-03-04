//
// Created by st007 on 19-3-4.
//

#include "CConnectPool.h"

template <class T>
CConnectPool<T>::CConnectPool() {
    m_mutex = new pthread_mutex_t;
    pthread_mutex_init(m_mutex, NULL);
    srand(NULL);
}

template <class T>
CConnectPool<T>::~CConnectPool() {
    if (nullptr == m_mutex) {
        delete m_mutex;
        m_mutex = nullptr;
    }
}

template <class T>
int CConnectPool<T>::get_connectIndex() {
    int index = -1;
    int rand_index = 0;
    pthread_mutex_lock(m_mutex);
    if (0 != m_used_index_vect.size())
        rand_index = rand() % m_used_index_vect.size();

    for (int i = rand_index; i < m_used_index_vect.size(); ++i) {
        if (0 == m_used_index_vect[i]) {
            m_used_index_vect[i] = 1;
            index = i;
            break;
        }
    }
    if (index == -1) {
        for (int i = 0; i < rand_index; ++i) {
            if (0 == m_used_index_vect[i]) {
                m_used_index_vect[i] = 1;
                index = i;
                break;
            }
        }
    }

    pthread_mutex_unlock(m_mutex);
    return index;
}

template <class T>
void CConnectPool<T>::removeConnectFromPool(int index) {
    pthread_mutex_lock(m_mutex);
    if (index >= 0 && index < m_used_index_vect.size()) {
        m_used_index_vect[index] = 1;
    }
    pthread_mutex_unlock(m_mutex);
}

template <class T>
bool CConnectPool<T>::returnConnectToPool(int index) {
    if (index < 0)
        return false;
    pthread_mutex_lock(m_mutex);
    if (index < m_used_index_vect.size()) {
        m_used_index_vect[index] = 0;
        pthread_mutex_unlock(m_mutex);
        return true;
    }
    pthread_mutex_unlock(m_mutex);
    return false;
}

template <class T>
T *CConnectPool<T>::getConnect(int index) const {
    pthread_mutex_lock(m_mutex);
    if (index >= 0 && index < m_conn_vect.size()) {
        T *p = m_conn_vect[index];
        pthread_mutex_unlock(m_mutex);
        return p;
    }
    return nullptr;
}

template <class T>
bool CConnectPool<T>::init(std::vector<T> connectPtrs) {
    if (connectPtrs.empty()) {
        return false;
    }

    pthread_mutex_lock(m_mutex);
    for (int i = 0; i < connectPtrs.size(); ++i) {
        m_used_index_vect.push_back(0);
        m_conn_vect.push_back(connectPtrs[i]);
    }
    pthread_mutex_unlock(m_mutex);
    return true;
}

template <class T>
bool CConnectPool<T>::replaceAliveConn(T *newconn, int index) {
    bool ret = false;
    pthread_mutex_lock(m_mutex);
    if (index >= 0 && index < m_used_index_vect.size()) {
        m_used_index_vect[index] = 0;
        m_conn_vect[index] = newconn;
        ret = true;
    }
    pthread_mutex_unlock(m_mutex);
    return ret;
}