/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 14:48:06 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/24 09:45:46 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string str("HI THIS IS BRAIN");
	std::string *stringPTR(&str);
	std::string &stringREF(str);

	std::cout << "Normal str call :  " << &str << std::endl;
	std::cout << "pointer str call :  " << stringPTR << std::endl;
	std::cout << "reference str call :  " << &stringREF << std::endl;

	std::cout << "======================================== " << std::endl;

	std::cout << "Normal str call :  " << str << std::endl;
	std::cout << "pointer str call :  " << *stringPTR << std::endl;
	std::cout << "reference str call :  " << stringREF << std::endl;
	return (0);
}