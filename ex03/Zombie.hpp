/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 12:06:50 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/20 14:26:13 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <array>

class Zombie{
	private:
		std::string _name;
		std::string _type;
	public:
		Zombie(){};
		Zombie(std::string, std::string);
		~Zombie();
		void	setName(std::string);
		void	setType(std::string);
		void	announce();
};
#endif