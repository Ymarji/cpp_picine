/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 14:48:06 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/20 14:52:25 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(){
	std::string str("HI THIS IS BRAIN");
	std::string* p_str(&str);
	std::string& r_str(str);
	
	std::cout << "Normal str call :  " << str << std::endl;
	std::cout << "pointer str call :  " << *p_str << std::endl;
	std::cout << "reference str call :  " << r_str << std::endl;
	return (0);
}