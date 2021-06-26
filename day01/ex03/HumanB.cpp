/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 09:51:34 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/26 18:14:43 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string p1): _name(p1){}

void	HumanB::attack(){
	std::cout << this->_name << " attacks with his " << this->_Weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &p1){
	this->_Weapon = &p1;
}