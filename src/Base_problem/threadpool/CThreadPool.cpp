//
// Created by st007 on 19-3-4.
//
#include <iostream>
#include "CThreadPool.h"

CThreadPool::CThreadPool() {

}

CThreadPool::CThreadPool(size_t threads):bstop(false) {
    for(size_t i = 0;  i < threads; ++i)
        m_workers.emplace_back(
                [this]
                {
                    for(;;)
                    {
                        std::function<void()> task;
                        {
                            std::unique_lock<std::mutex> lock(this->queue_mutex);
                            this->condition.wait(lock, [this]{return this->bstop || !this->m_tasks.empty();});
                            if(this->bstop && this->m_tasks.empty())
                                return;
                            task = std::move(this->m_tasks.front());
                            this->m_tasks.pop();
                        }
                        task();
                    }
                }
            );
}

CThreadPool::~CThreadPool() {
    {
        std::unique_lock<std::mutex> lock(queue_mutex);
        bstop = true;
    }
    condition.notify_all();
    for(std::thread &worker:m_workers)
        worker.join();
}

void CThreadPool::func() {
    std::this_thread::sleep_for(std::chrono::microseconds(100));
    std::cout << "worker thread ID:" << std::this_thread::get_id() << std::endl;
}


template <class F, class... Args>
auto CThreadPool::enqueue(F &&f, Args &&... args)->std::future<typename std::result_of<F(Args...)>::type> {
    using return_type = typename std::result_of<F(Args...)>::type;

    auto task = std::make_shared<std::packaged_task<return_type ()>>(
            std::bind(std::forward<F>(f), std::forward<Args>(args)...)
            );

    std::future<return_type> res = task->get_future();
    {
        std::unique_lock<std::mutex> lock(queue_mutex);
        //don't allow enqueuing after stopping the pool
        if(bstop)
            throw std::runtime_error("enqueue on stopped threadpool");
        m_tasks.emplace([task](){*task();});
    }
    condition.notify_one();
    return res;
}