#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <algorithm>
#include <iostream>
#include <vector>

#include <stack>
#include <deque>
template < typename T ,  class Container = std::deque< T > >
class MutantStack: public std::stack< T , Container>
{
    public:

    MutantStack():std::stack< T , Container>() {};
    MutantStack(MutantStack const &rhs):std::stack< T , Container>(rhs) {};
    MutantStack &operator=(MutantStack const &rhs) {
        if (this != &rhs)
            std::stack< T , Container>::operator=(rhs);
        return *this;
    };

    typedef typename std::stack< T , Container>::container_type::iterator iterator;
    typedef typename std::stack< T , Container>::container_type::const_iterator const_iterator;
    typedef typename std::stack< T , Container>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack< T , Container>::container_type::const_reverse_iterator const_reverse_iterator;

    iterator    begin() {return std::stack< T , Container>::c.begin();};
    const_iterator  begin() const {return std::stack< T , Container>::c.begin();}

    iterator    end() {return std::stack< T , Container>::c.end();};
    const_iterator    end() const {return std::stack< T , Container>::c.end();};

    reverse_iterator    rbegin() {return std::stack< T , Container>::c.rbegin();};
    const_reverse_iterator    rbegin() const {return std::stack< T , Container>::c.rbegin();};

    reverse_iterator    rend() {return std::stack< T , Container>::c.rend();};
    const_reverse_iterator    rend() const {return std::stack< T , Container>::c.rend();};

    virtual ~MutantStack() {};
};

#endif /* MUTANTSTACK_HPP */
