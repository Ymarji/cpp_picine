/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:16:59 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/17 12:00:59 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"


void	ZombieEvent::setZombieType(){
	std::cout << " Zombie Type : ";
	std::getline(std::cin, this->_type);
}

Zombie* ZombieEvent::newZombie(std::string name){
	this->setZombieType();
	Zombie *z = new Zombie(name, this->_type);
	return (z);
}