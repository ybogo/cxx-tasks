/* Proxy object.
 * @file
 * @date 2018-08-07
 * @author Anonymous
 */

#ifndef __PROXY_HPP__
#define __PROXY_HPP__

#include <mutex>

template<class T>
class ptr_holder
{
public:
    ptr_holder(T* ptr): ptr_(ptr) {}

    //{ describe proxy object
    class proxy
    {
        std::unique_lock<std::mutex> lock;
        T* t;
    public:
        explicit proxy(std::mutex& mx, T* t) : 
            lock(mx),
            t(t)
        {}

        ~proxy()
        {}
        
        T *operator -> () { return t; }
    };

    proxy operator -> () const
    {
        return proxy(mutex_, ptr_);
    }
    //}

private:
    T* ptr_;
    mutable std::mutex mutex_;
};

#endif // __PROXY_HPP__
