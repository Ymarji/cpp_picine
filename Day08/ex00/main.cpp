/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 17:47:49 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/24 13:54:04 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>
#include <iostream>
int main(){
    std::list<int> lst;
    
    lst.push_back(1);
    lst.push_back(3);
    lst.push_back(2);
    lst.push_back(42);
    std::cout << ((easyfind(lst, 42))? "true" : "false") << std::endl;

    std::vector<int> v;
    v.push_back(1);
    v.push_back(42);
    v.push_back(1337);
    std::cout << ((easyfind(v, 3))? "true" : "false") << std::endl;
    std::cout << ((easyfind(lst, 42))? "true" : "false");
    
}