/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 14:53:49 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/26 14:33:40 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "[ No KAREN Here ]" << std::endl;
		return 1;
	}
	Karen karen;
	int i(0);
	std::string type[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string str = av[1];
	while (i < 4)
	{
		if (type[i] == str)
		{
			break;
		}
		i++;
	}

	switch (i)
	{
	case 0:
		while (i < 4)
		{
			karen.complain(type[i++]);
			std::cout << std::endl;
		}
		break;

	case 1:
		while (i < 4)
		{
			karen.complain(type[i++]);
			std::cout << std::endl;
		}
		break;

	case 2:
		while (i < 4)
		{
			karen.complain(type[i++]);
			std::cout << std::endl;
		}
		break;

	case 3:
		while (i < 4)
		{
			karen.complain(type[i++]);
			std::cout << std::endl;
		}
		break;

	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
	return 0;
}