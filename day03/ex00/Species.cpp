/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Species.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 16:53:14 by ymarji            #+#    #+#             */
/*   Updated: 2021/08/29 14:27:08 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Species.hpp"

Dog::Dog(){
    _type = "Dog";
    std::cout << "Dog Constructors" << std::endl;
}

Dog::Dog(Dog const &rhs):Animal(rhs){
}

Dog& Dog::operator=(Dog const &rhs){
    this->_type = rhs._type;
    return *(this);
}

void  Dog::makeSound() const
{
    std::cout << "->> Dog Sound" << std::endl;
}

Dog::~Dog(){
    std::cout << "Dog Destructors" << std::endl;
}

//cat

Cat::Cat(){
    _type = "Cat";
    std::cout << "Cat Costructors" << std::endl;
}

Cat::Cat(Cat const &rhs):Animal(rhs){
}

Cat& Cat::operator=(Cat const &rhs){
    this->_type = rhs._type;
    return *(this);
}

void  Cat::makeSound() const
{
    std::cout << "->> Cat Sound" << std::endl;
}

Cat::~Cat(){
    std::cout << "Cat Destructors" << std::endl;
}