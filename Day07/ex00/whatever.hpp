/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:07:07 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/14 14:45:32 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template < typename T >
void    swap(T & p1, T & p2) {
    T tmp;
    
    tmp = p1;
    p1 = p2;
    p2 = tmp;
};

template < typename T >
T const&  min(T const & p1, T const & p2) {
    return ( p1 < p2 ? p1 : p2);
};

template < typename T >
T const&  max(T const & p1, T const & p2){
    return ( p1 > p2 ? p1 : p2);
};

#endif /* WHATEVER_HPP */
