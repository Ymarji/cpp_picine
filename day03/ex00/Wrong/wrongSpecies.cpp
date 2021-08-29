/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongSpecies.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 16:53:14 by ymarji            #+#    #+#             */
/*   Updated: 2021/08/29 14:31:40 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongSpecise.hpp"

WrongDog::WrongDog(){
    _type = "WrongDog";
    std::cout << "WrongDog Constructors" << std::endl;
}

WrongDog::WrongDog(WrongDog const &rhs):WrongAnimal(rhs){
}

WrongDog& WrongDog::operator=(WrongDog const &rhs){
    this->_type = rhs._type;
    return *(this);
}

void  WrongDog::makeSound() const
{
    std::cout << "->> Dog Sound" << std::endl;
}

WrongDog::~WrongDog(){
    std::cout << "WrongDog Destructors" << std::endl;
}

//cat

WrongCat::WrongCat(){
    _type = "WrongCat";
    std::cout << "WrongCat Costructors" << std::endl;
}

WrongCat::WrongCat(WrongCat const &rhs):WrongAnimal(rhs){
}

WrongCat& WrongCat::operator=(WrongCat const &rhs){
    this->_type = rhs._type;
    return *(this);
}

void  WrongCat::makeSound() const
{
    std::cout << "->> Cat Sound" << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat Destructors" << std::endl;
}