/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 11:33:02 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/20 11:38:25 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Pony.hpp"

Pony::Pony(std::string p1): _name(p1){
	std::cout << "   Pony object created : " << _name << std::endl;
}

Pony::~Pony()
{
	std::cout << "   Pony object deleted : " << _name << std::endl;
}