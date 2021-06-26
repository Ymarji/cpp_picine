/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 09:51:46 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/24 10:01:27 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CPP
# define HUMANA_CPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon	&_Weapon;
	public:
		HumanA(std::string, Weapon&);
		void	attack();
};
#endif