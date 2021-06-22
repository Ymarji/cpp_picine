/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 15:00:45 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/22 11:08:57 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string		Brain::identify1() const {
	// void *add = (this);
	std::stringstream tmp;
	tmp << this;
	std::string str = tmp.str();
	for (size_t i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
	return (str);
}