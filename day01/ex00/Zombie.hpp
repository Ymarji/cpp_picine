/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 12:06:50 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/26 14:48:31 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <array>

class Zombie
{
private:
	std::string _name;

public:
	Zombie(std::string);
	~Zombie();
	void announce(void);
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);
#endif
