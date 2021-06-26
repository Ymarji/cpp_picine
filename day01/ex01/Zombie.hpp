/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 12:06:50 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/26 14:55:30 by ymarji           ###   ########.fr       */
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
	Zombie(){};
	Zombie(std::string);
	~Zombie();
	void setName(std::string);
	void announce(void);
};

#endif
