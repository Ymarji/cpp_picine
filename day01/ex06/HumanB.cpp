/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:07:40 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/22 15:26:25 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string p1, Weapon p2): _name(p1), _Weapon(p2){}

void	HumanB::attack(){
	std::cout << this->_name << " attacks with his " << this->_Weapon.getType();
}