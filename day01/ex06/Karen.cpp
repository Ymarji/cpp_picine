/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:37:28 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/26 14:28:53 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::debug( void ){
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "KAREN : I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info( void ){
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "KAREN : I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning( void ){
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "KAREN : I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error( void ){
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "KAREN : This is unacceptable, I want to speak to the manager now " << std::endl;
}

void	Karen::complain( std::string level )
{
	int i(0);
	std::string	type[5] = {"DEBUG", "INFO", "WARNING", "ERROR", "KAREN :  ***** ******** *****  ****** ***** "};
	void	(Karen::*mood[]) (void) = {
	mood[0] = &Karen::debug,
	mood[1] = &Karen::info,
	mood[2] = &Karen::warning,
	mood[3] = &Karen::error};
	while (i < 4)
	{
		if (type[i] == level)
		{
			(this->*mood[i])();
			return ;
		}
		i++;
	}
	std::cout << type[4] << std::endl;
}