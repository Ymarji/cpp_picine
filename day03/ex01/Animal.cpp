/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:38:17 by ymarji            #+#    #+#             */
/*   Updated: 2021/08/29 13:16:45 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal constractor" << std::endl;
}

Animal::Animal(Animal const &rhs):_type(rhs._type){
    std::cout << "Animal copy constractor" << std::endl;
}

void Animal::makeSound() const{
    std::cout << "->> Animal Sound" << std::endl;
}

Animal& Animal::operator=(Animal const &rhs){
    this->_type = rhs._type;
    return *(this);
}

std::string Animal::getType() const{
    return this->_type;
}

Animal::~Animal(){
    std::cout << "Animal destractor" << std::endl;
}