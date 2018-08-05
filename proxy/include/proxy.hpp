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
    U2FsdGVkX1/71EdR1wUO2tUkZ2fFfT9l1yt42ppIRkpm9wLwcmV6Y9OK66uiHqrOkQbDG45A2pRahvFISQwgwgQLaxo8oYAb
    U2FsdGVkX1+1+1ZPcm6hzThZHu7oSjew
    U2FsdGVkX1/7pOkSOBp/Ic+SNhndDZROMZrDgN/6mO8=
        U2FsdGVkX18hiiiTFkxqOBIXsHc3s4axyOBMu1xJCpUgmpeiDAtJBFxn7ZQ7WJB8LtzxAoBH3c44tF1PIsFpww==
            U2FsdGVkX198V/okSoW6TK9HCrVIabqH8GA4Z6TI/W2UXUoVHF3K0+SmxTw7AYR2vp6rEn46rdnKiLtqN7niBXKqkl5c0J01
            U2FsdGVkX18juyLG7+YYUtVr9rMsnYQy6E6J/n5Hc/Xkia4Hkkcyrw==
        U2FsdGVkX18VJC3r0KmcoeGebG8RfguqgWRvH+3A6bo=

        U2FsdGVkX19YOqg2E0kQVexAlGIXeK06Q/qv8ncly6QsV5Hc2GKsJwaqycuEc0VT5d63nK7CmUY=
        U2FsdGVkX18afZZAJmcobby4jZzWE06JRb2qFVUIvv8=
            U2FsdGVkX1+J6I8gSIOhHBDqdgeHaiLrjwIqf2UuR0wIf3GKraHO8cm5hudRIIcX
        U2FsdGVkX19b/FF+g0RADDd9JPSmUIk+l190XdCQUL0=

    U2FsdGVkX19L+oD5Kj3KWIHm7vekjKt9lIAFj8O+uOo=
        U2FsdGVkX1/cFo8KSW8XrQsoaJdoj04xxdnorc1uNlF8H82RtXPCxw==
    U2FsdGVkX19LlGje8vZ5LFhcV7vC3xQJ

    U2FsdGVkX1/vfdi6ufQUNSTqUILo/oDtvQ9Tl7MxtZDRc7OGfvcZjsy0+4utEy1k
    U2FsdGVkX18nnVWeUAjRAnxGDtsHXann
        U2FsdGVkX1/uMpawgrRiWkDLodIAhdjQKCGt38CZUPw+RWxoi2pcMCp7yLpUHLDNP07+YRE9Fjc=
    U2FsdGVkX1/fn9z+qYTWem+oTa5wMYaC
    //}

private:
    T* ptr_;
    mutable std::mutex mutex_;
};

#endif // __PROXY_HPP__
