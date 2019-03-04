//
// Created by st007 on 19-3-4.
//

#ifndef DESIGNPATTERN_CTHREADPOOL_H
#define DESIGNPATTERN_CTHREADPOOL_H

#include <vector>
#include <queue>
#include <memory>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <future>
#include <functional>
#include <stdexcept>

class CThreadPool {
public:
    CThreadPool();
    CThreadPool(size_t);

    ~CThreadPool();

    template <class F, class ... Args>
    auto enqueue(F &&f, Args &&... args)->std::future<typename std::result_of<F(Args...)>::type>;
protected:

private:
    //need to keep track of thread so we can join them
    std::vector<std::thread> m_workers;
    //the task queue
    std::queue<std::function<void()>> m_tasks;

    //synchronization
    std::mutex queue_mutex;
    std::condition_variable condition;
    bool bstop;
};


#endif //DESIGNPATTERN_CTHREADPOOL_H
