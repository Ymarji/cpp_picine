/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 12:06:32 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/24 09:46:00 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << "<" << this->_name << ">  Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

Zombie::Zombie(std::string p1) : _name(p1)
{
}

Zombie::~Zombie()
{
	std::cout << "<" << this->_name << ">  Got cured Successfully" << std::endl;
}