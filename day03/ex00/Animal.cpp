/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 16:53:05 by ymarji            #+#    #+#             */
/*   Updated: 2021/08/29 14:29:27 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal Constructors" << std::endl;
}

Animal::Animal(Animal const &rhs):_type(rhs._type){
    std::cout << "Animal Copy Constructors" << std::endl;
}

void Animal::makeSound() const{
    std::cout << "->> Animal No sound" << std::endl;
}

Animal& Animal::operator=(Animal const &rhs){
    this->_type = rhs._type;
    return *(this);
}

std::string Animal::getType() const{
    return this->_type;
}

Animal::~Animal(){
    std::cout << "Animal destructors" << std::endl;
}