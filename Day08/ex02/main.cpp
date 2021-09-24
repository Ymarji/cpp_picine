/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 11:15:23 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/24 13:39:28 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

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
    while (its != ites)
    {
        std::cout << *its << std::endl;
        ++its;
    }
    // std::stack<int> s(mstack);
    return 0;
}