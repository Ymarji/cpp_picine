/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 10:46:15 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/22 15:16:39 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CPP
# define HUMANA_CPP

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon	_Weapon;
		std::string _name;
	public:
		HumanA(std::string, Weapon);
		~HumanA();
		void	attack();
};
#endif