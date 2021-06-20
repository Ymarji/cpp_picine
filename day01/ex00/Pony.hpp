/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 11:33:05 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/20 11:36:06 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
#include <iostream>
#include <string>

class Pony
{
private:
	std::string _name;
public:
	Pony(std::string);
	~Pony();
};

#endif