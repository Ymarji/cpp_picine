/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 11:58:19 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/10 14:04:06 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>
#include <string>

struct  Data{
    int     Nbr;
    std::string Str;
    char    c;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
#endif /* SERIALIZATION_HPP */