/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 14:22:36 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/22 11:12:04 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int p1): _N(p1){
	this->_Zombie = new Zombie[_N];
	char *names[6] = {"Zombye", "Husk", "Staby", "Ogre", "Smochen", "KawaiZ"};

	std::srand(time(NULL));
	for (int i = 0; i < this->_N; i++)
	{
		_Zombie[i].setName(names[std::rand() % 6]);
		_Zombie[i].setType("Zombie");
	}
}

void	ZombieHorde::announce(){
	for (int i = 0; i < this->_N; i++)
		this->_Zombie[i].announce();
}

ZombieHorde::~ZombieHorde(){
	delete[] this->_Zombie;
}