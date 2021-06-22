/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 10:46:15 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/22 15:15:50 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CPP
#define HUMANB_CPP

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon _Weapon;
		std::string _name;

	public:
		HumanB(std::string, Weapon);
		~HumanB();
		void attack();
};
#endif