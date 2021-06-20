/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 12:12:12 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/20 12:30:51 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

Zombie	*randomChump()
{
	ZombieEvent z_event;
	Zombie *nZombie;
	std::array<std::string, 6> names = {"Zombye", "Husk", "Staby", "Ogre", "Smochen", "KawaiZ"};
	std::srand(time(NULL));
	nZombie = z_event.newZombie(names[std::rand() % 6]);
	// nZombie->announce();
	return(nZombie);
}
int main()
{
	Zombie *nZom = randomChump();
	delete nZom;
	return (0);
}
