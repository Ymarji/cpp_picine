/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 14:26:15 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/22 14:56:21 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string	const& Weapon::getType() const{
	return (_type);
}
void	Weapon::setType(std::string p1){
	this->_type = p1;
}