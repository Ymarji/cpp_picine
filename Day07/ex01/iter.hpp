#ifndef ITER_HPP
#define ITER_HPP

#include <string>
#include <iostream>

template < typename T>
void    iter(T *Addr, int len, void (*fun)( T const & )){
    for (int i = 0; i < len; i++)
        fun(Addr[i]);
};

#endif /* ITER_HPP */
