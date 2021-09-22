/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 16:07:43 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/21 18:58:10 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../ex00/easyfind.hpp"
#include "span.hpp"
#include <array>
int main()
{
    Span sp = Span(100);
    std::srand(std::time(NULL));
    for (size_t i = 0; i < 100; i++)
    {
        int nb = i * ((std::rand() % 3) + 1);
        sp.addNumber(nb);
    }
    
    // try{
    //     sp.addNumber(5);
    //     sp.addNumber(0);
    //     sp.addNumber(178);
    //     sp.addNumber(9);
    //     sp.addNumber(30);
    //     // sp.addNumber(99999999);
    // }
    // catch( std::exception &e)
    // {
    //     std::cout << "eadasdasdasdasdasd" << std::endl;
        
    // }
    for (size_t i = 0; i < 100; i++)
    {
        std::cout << sp[i] << std::endl;
    }
    std::cout << "---------------------------------------" << std::endl;
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}