/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 16:07:43 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/24 13:35:13 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../ex00/easyfind.hpp"
#include "span.hpp"
#include <array>
#include <list>
#define SIZE 10
int main()
{
    Span sp = Span(SIZE);
    // std::srand(std::time(NULL));
    // for (size_t i = 0; i < SIZE; i++)
    // {
    //     int nb = i * ((std::rand() % 3) + 1);
    //     sp.addNumber(nb);
    // }
    
    // try{
    //     sp.addNumber(5);
    //     sp.addNumber(0);
    //     sp.addNumber(178);
    //     sp.addNumber(9);
    //     sp.addNumber(30);
    //     sp.addNumber(1337);
    // }
    // catch( std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    
    std::cout << "-------------------- PRINT RANGE TEST-------------------" << std::endl;
    std::vector<int> v;
    for (size_t i = 0; i < SIZE; i++)
    {
        int nb = i * ((std::rand() % 3) + 1);
        v.push_back(nb);
    }
    sp.addNumber(v.begin(), v.end());
    for (size_t i = 0; i < SIZE; i++)
        std::cout << v[i] << std::endl;
    std::cout << "--------------------- PRINT SPAN ELEMENT ------------------" << std::endl;
    for (size_t i = 0; i < SIZE; i++)
    {
        std::cout << sp[i] << std::endl;
    }
    std::cout << "--------------- LONG and SHORT SPAN ------------------" << std::endl;
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}