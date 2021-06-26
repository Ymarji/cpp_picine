/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 09:52:01 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/24 09:52:03 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"

HumanA::HumanA(std::string p1, Weapon &p2): _name(p1), _Weapon(p2){}

void	HumanA::attack(){
	std::cout << this->_name << " attacks with his " << this->_Weapon.getType() << std::endl;
}