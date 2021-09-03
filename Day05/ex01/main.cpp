/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 16:50:24 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/03 17:12:16 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{	
	std::cout << "First part" << std::endl;
	try {
		Bureaucrat max("Max", 120);
		Bureaucrat henery("Henery", 1);
		std::cout << max;

		Form	test("Test Form", 100, 150);
		henery.signForm(test);
		max.signForm(test);
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

		std::cout << "\n2nd part" << std::endl;
	try {
		Form	test("Test Form", -99 ,21);
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

			std::cout << "\n3ed part" << std::endl;
	try {
		Form	test("Test Form", 151 ,21);
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

			std::cout << "\n3ed part" << std::endl;
	try {
		Form	test("Test Form", 151 ,-1);
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}