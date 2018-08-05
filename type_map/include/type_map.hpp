/* Map of types.
 * @file
 * @date 2018-08-25
 * @author Anonymous
 */

#ifndef __TYPE_MAP_HPP__
#define __TYPE_MAP_HPP__

#include <array>
#include <tuple>

namespace detail
{
    template<class T, class Tuple>
    struct type_to_index;

    template<class T, class... Ts>
    struct type_to_index<T, std::tuple<T, Ts...>>
    {
        constexpr static size_t v = 0;
    };

    template<class T, class U, class... Ts>
    struct type_to_index<T, std::tuple<U, Ts...>>
    {
        constexpr static size_t v = 1 + type_to_index<T, std::tuple<Ts...>>::v;
    };
}

//? What is wrong with ``*this[i]``?
//{
U2FsdGVkX1/JnuZszpSVnMeTLkohu7CHse4LtjcxZ1GgzRWcVF7uyYubzAoruZjA
U2FsdGVkX1/r7zxFUKJVeNaSdG86HBqT2ELQoe1NPZTVDptT6dVngToO3uDbqIBfE9RwjhrGEhHBA/DDQXL9/Vrz3nlblz9G
U2FsdGVkX1/fzsAV6ZbD/Rg7PLv6u0Tx
U2FsdGVkX18DHIobRny1njQpqm1JKFmgcyUyZdN0aHM=
    U2FsdGVkX1/mXRE+D9N8foEixaKbUQ/EsQehLjH9dpqccUGWpsnjosIsXXLD0cqROIH3ie5jh8w=

    U2FsdGVkX1/ogHBbiDieKU51+AvG2XOJ2Tugwuc8vpH95cqr0OfGA0EwRCXHMQ4AEChHVU9pEp/BUQK8QAdg9KCkp4AfKp1bi9DCIGXu58MkabygWYft4NFqtx+ZU2ik/L/K+kindDnUmZsV4qJgXA==
    U2FsdGVkX1/PrPsH3CV9GB3TMtui8Qiw

    U2FsdGVkX1+4A2GdORv3Rn3gqO0WUj+c/A2yiG7o99q+xJNXF24Jjw==
    U2FsdGVkX1+DBfyekS4pCGAHAapEk1pxkNLZeK94Dxg=
    U2FsdGVkX1+NHBRZTEYJFFy1iQX1sK+L
        U2FsdGVkX18oO3B1fx0A0CRL21fD2gtajLQhyA8k8XQmd9IQK8HpK+6lDrDfiGUMCHcLbr5LyBW1LZSQC3pEWZHpWs6VUYYZLCx+kyYFDLRtO8sMwGRFGPotg6+4ZX01
    U2FsdGVkX19/Z245jUN5dViQhXzXRrU7

    U2FsdGVkX19wahv2mwT4U60dK0M28pq17HVRMIfl+ASLmrtneIXgoA==
    U2FsdGVkX19txljwOWN8STdWYdOVr3REtuem5FVilZfMhlwAMSIFHeIMQ8q1m2t6
    U2FsdGVkX183A3Ti38TEce2JeeM5mP+B
        U2FsdGVkX18TlWIECZYkYfaXVunk54WThcFe4RQh1vJre/4DcJlcVBSXpGdPDkm5lM+kJA7DDFvWbx+1C5GVVgMVW8mcSQd3szBff3+rUTHfE843f2h1QtiM6weLsF0P
        U2FsdGVkX1+1ma83N2Zpp9Z5D533G5kri22HwgCOLQvmlmB8lMTn/3D1vTa1oMqw
    U2FsdGVkX184oZES/AuXYHIfCKTsoETR
U2FsdGVkX1/uTx3UA+SujRcOB1E9LAD4
//}

namespace std
{
    template<typename T, class TypeMap>
    const auto& get(const TypeMap& tm)
    {
        //{ How to call ``as``?
        U2FsdGVkX1/p8MqbTeSDn/Xad7VO82GDijL/BrnmrN9C/9CNB4JIaVCsdRrwSTMFqjFnA62TaKE=
        //}
    }
}

#endif // __TYPE_MAP_HPP__
