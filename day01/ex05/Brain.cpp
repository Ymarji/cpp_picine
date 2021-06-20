/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 15:00:45 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/20 15:33:43 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string		Brain::identify(){
	void *add = static_cast<void *>(this);
	std::stringstream tmp;
	tmp << add;
	std::string str = tmp.str();
	return (str);
}