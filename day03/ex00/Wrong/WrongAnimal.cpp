/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 16:53:05 by ymarji            #+#    #+#             */
/*   Updated: 2021/08/29 14:31:18 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal Constructors" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &rhs):_type(rhs._type){
    std::cout << "WrongAnimal Copy Constructors" << std::endl;
}

void WrongAnimal::makeSound() const{
    std::cout << "Animal No Sound" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &rhs){
    this->_type = rhs._type;
    return *(this);
}

std::string WrongAnimal::getType() const{
    return this->_type;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructors" << std::endl;
}