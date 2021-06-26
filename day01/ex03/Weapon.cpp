/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 09:51:09 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/24 09:51:12 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string	const& Weapon::getType() const{
	return (_type);
}
void	Weapon::setType(std::string p1){
	this->_type = p1;
}

Weapon::Weapon(std::string p1): _type(p1){
}