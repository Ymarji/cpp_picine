/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 10:54:36 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/23 11:07:53 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name );

int	main()
{
	int i;

	std::cout << " num of Zombie to Creat (int) ::  ";
	std::cin >> i;

	if (!std::cin || i < 0)
	{
		std::cout << " wrong input " << std::endl;;
		return (1);
	}
	Zombie *z = zombieHorde(i, "Zombie");
	while (i--)
		z[i].announce();
	std::cout << " ====================================== " << std::endl;
	delete[] z;
	return (1);
}