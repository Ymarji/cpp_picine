/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 12:06:32 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/20 12:30:22 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(){
	std::cout << "<" << this->_name << " (" << this->_type <<")>  Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie(std::string p1, std::string p2): _name(p1), _type(p2){
	this->announce();
}
Zombie::~Zombie()
{
	std::cout << "<" << this->_name << " (" << this->_type <<")>  Got cured Successfully" << std::endl;
}