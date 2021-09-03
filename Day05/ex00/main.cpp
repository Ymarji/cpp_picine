/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 16:50:08 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/03 16:50:09 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{	
	std::cout << "First part" << std::endl;
	try {
		Bureaucrat max("Max", 120);
		Bureaucrat henery("Henery", 1);
		std::cout << max;
		max.gradeDec(); 
		std::cout << "After decremeting " << max.getName() << "'s grade" << std::endl;
		std::cout << max; 
		henery.gradeInc(); 
		std::cout << henery;
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "\nSecond part" << std::endl;
	try {
		Bureaucrat max("Max", 150);
		std::cout << max;
		max.gradeDec(); 
		std::cout << max; 
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "\nThird part" << std::endl;
	try {
		Bureaucrat max("Max", 151);
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "\nFourth part" << std::endl;
	try {
		Bureaucrat max("Max", -96);
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}