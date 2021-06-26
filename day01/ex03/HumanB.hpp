/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 09:51:25 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/26 18:14:35 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CPP
#define HUMANB_CPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon		*_Weapon;

	public:
		HumanB(std::string p1);
		~HumanB(){};
		void	setWeapon(Weapon &);
		void attack();
};
#endif