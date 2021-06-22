/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 16:38:25 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/22 10:36:44 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

std::string	Human::identify() const{
	return(_brain.identify1());
}

Brain const &		Human::getBrain(){
	return (this->_brain);
}