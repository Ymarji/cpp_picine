/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:38:01 by ymarji            #+#    #+#             */
/*   Updated: 2021/08/28 18:38:03 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain constractor" << std::endl;
}

Brain::Brain(Brain const &rhs){
    std::cout << "Brain copy constractor" << std::endl;
    for (size_t i = 0; i < 100; i++)
        this->_ideas[i] = rhs._ideas[i];
}

Brain& Brain::operator=(Brain const &rhs){
    for (size_t i = 0; i < 100; i++)
        this->_ideas[i] = rhs._ideas[i];
    return *(this);
}

Brain::~Brain(){
    std::cout << "Brain Destractor" << std::endl;
}