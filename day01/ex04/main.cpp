/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 10:45:27 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/26 18:22:13 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	replace_string(std::string str, std::string old, std::string new_s , std::ofstream &fout)
{
	size_t	i;
	i = str.find(old);
	while (i != std::string::npos)
	{
		str = str.substr(0, i) + new_s + &str[i + old.length()];
		i = str.find(old, i);
	}
	
	fout << str;
	fout << std::endl;
}

int main(int ac, char **av)
{
	std::string str;
	if (ac < 4)
	{
		std::cout << " Arg Error " << std::endl;
		return (1);
	}
	
	std::string file = av[1]; 
	std::ifstream fin(file, std::ifstream::in);
	if (!fin.is_open())
	{
		std::cout << " error in open file " << std::endl;
		return 1;
	}
	std::ofstream fout(file + ".replace", std::fstream::out | std::fstream::trunc);
	if (!fout.is_open())
	{
		std::cout << " error in Out file " << std::endl;
		return 1;
	}
	while (std::getline(fin , str))
	{
		replace_string(str, av[2], av[3], fout);
	}
	return 0;
}