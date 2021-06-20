/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:10:54 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/17 11:59:33 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string _type;
	public:
		void	setZombieType();
		Zombie* newZombie(std::string);
};

#endif