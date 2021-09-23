#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <algorithm>
#include <iostream>
#include <stack>

template < typename T >
class MutantStack: public std::stack<T>
{
    public:
        MutantStack(){};
        // MutantStack(MutantStack const &);
        ~MutantStack(){};
};

#endif /* MUTANTSTACK_HPP */
