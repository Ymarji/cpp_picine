/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 17:47:46 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/18 16:16:29 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <algorithm>
#include <string>

template < typename T >
bool    easyfind(T & stack, int in)
{
    if (std::find(stack.begin(), stack.end(), in) == stack.end())
        return false;
    else
        return true;
}

#endif /* EASYFIND_HPP */
