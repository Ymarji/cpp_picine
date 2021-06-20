/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 12:33:41 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/20 14:31:01 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
class ZombieHorde{
	public:
		ZombieHorde(int N);
		~ZombieHorde();
		void	 announce();
	private:
		int _N;
		Zombie *_Zombie;
};
#endif