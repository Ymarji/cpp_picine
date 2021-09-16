/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:07:12 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/16 12:09:41 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


void    print(int const &x)
{
    std::cout << x << "\t";
}

void    print(char const &x)
{
    std::cout << x;
}

int main( void ) {
    int a[5] = {0,1,2,3,4};
    char    arr[] = "hello";
    
    ::iter<int>(a, 5, &print);
    ::iter<char>(arr, 6, &print);
    return 0;
}