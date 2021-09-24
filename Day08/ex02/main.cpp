/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 11:15:23 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/24 13:52:15 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include "../ex00/easyfind.hpp"
#include "../ex01/span.hpp"
#include "../ex01/span.cpp"
int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    // std::cout << mstack.top() << std::endl;
    // mstack.pop();
    // std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    // while (!mstack.empty())
    // {
    //     std::cout << mstack.top() << std::endl;
    //     mstack.pop();
    // }
    
    
    MutantStack<int>::iterator its = mstack.begin();
    MutantStack<int>::iterator ites = mstack.end();
    ++its;
    --its;
    // if (easyfind(mstack, 7357))
    //         std::cout << "Found" << std::endl;
    while (its != ites)
    {
            
        std::cout << *its << std::endl;
        ++its;
    }
    std::stack<int> s(mstack);

    std::cout << "---------------------------------------------------" << std::endl;

    MutantStack<int, std::vector<int> > mplusstack;
    mplusstack.push(5);
    mplusstack.push(17);
    mplusstack.push(3);
    mplusstack.push(5);
    mplusstack.push(737);
    mplusstack.push(0);
    if (easyfind(mplusstack, 737))
            std::cout << "Found" << std::endl;
    
    std::cout << "--------------- LONG and SHORT SPAN ------------------" << std::endl;

    Span sp = Span(mplusstack.size());
    MutantStack<int>::iterator its1 = mstack.begin();
    MutantStack<int>::iterator ites1 = mstack.end();
    sp.addNumber(its1, ites1);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}