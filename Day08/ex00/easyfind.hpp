/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 17:47:46 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/24 11:35:33 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>

template < typename T >
bool    easyfind(T & stack, int in)
{
    if (std::find(stack.begin(), stack.end(), in) == stack.end())
        return false;
    else
        return true;
}

#endif /* EASYFIND_HPP */
