/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 14:32:15 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/20 14:39:07 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int	main()
{
	int i;

	std::cout << " num of Zombie to Creat (int)::  ";
	std::cin >> i;

	if (!std::cin || i < 0)
	{
		std::cout << " wrong input " << std::endl;;
		// std::cin.ignore('\n');
		return (1);
	}
	ZombieHorde *zh = new ZombieHorde(i);
	zh->announce();
	std::cout << " ====================================== " << std::endl;
	delete zh;
	return (1);
}