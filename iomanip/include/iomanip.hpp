/* Custom manipulators.
 * @file
 * @date 2018-08-05
 * @author Anonymous
 */

#ifndef __IOMANIP_HPP__
#define __IOMANIP_HPP__

#include <iostream>

//{ endm manipulator
std::ostream& endm(std::ostream& out)
{
    return out << "[eol]\n";
}
//}

//{ squares manipulator
struct squares_proxy
{
    explicit squares_proxy(std::ostream & os):
    os(os)
    {}

    template<typename Input>
    std::ostream & operator<<(Input const& in)
    {
        return os << '[' << in << ']';
    }

private:
    std::ostream & os;
};

struct squares_creator { } squares;
squares_proxy operator<<(std::ostream & os, squares_creator)
{
    return squares_proxy(os);
}
//}

//{ add manipulator
template<typename Input>
struct add_proxy_2
{
    explicit add_proxy_2(std::ostream & os, Input const& op1):
        os(os),
        op1(op1)
    {
    }

    std::ostream & operator<<(Input const& op2)
    {
        Input res = op1 + op2;
        return os << res;
    }

private:
    std::ostream & os;
    Input op1;
};

struct add_proxy_1
{
    explicit add_proxy_1(std::ostream & os):
        os(os)
    {
    }

    template<typename Input>
    struct add_proxy_2<Input> operator<<(Input const& in)
    {
        return add_proxy_2<Input>(os, in);
    }

private:
    std::ostream & os;
};

struct add_creator { } add;
add_proxy_1 operator<<(std::ostream & os, add_creator)
{
    return add_proxy_1(os);
}
//}

#endif // __IOMANIP_HPP__
