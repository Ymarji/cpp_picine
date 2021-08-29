/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Species.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:38:09 by ymarji            #+#    #+#             */
/*   Updated: 2021/08/29 14:39:53 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Species.hpp"

Dog::Dog():_brain(new Brain()){
    std::cout << "Dog constractor" << std::endl;
    _type = "Dog";
}

Dog::Dog(Dog const &rhs):Animal(rhs){
    *this = rhs;
    std::cout << "Dog copy constractor" << std::endl;
}

Dog& Dog::operator=(Dog const &rhs){
    this->_type = rhs._type;
    _brain = new Brain();
    *_brain = *rhs._brain;
    return *(this);
}

void  Dog::makeSound() const
{
    std::cout << "->> Dog Sound" << std::endl;
}

Dog::~Dog(){
    delete _brain;
    std::cout << "Dog destractor" << std::endl;
}

//cat

Cat::Cat():_brain(new Brain()){
    std::cout << "Cat constractor" << std::endl;
    _type = "Cat";
}

Cat::Cat(Cat const &rhs):Animal(rhs){
    *this = rhs;
    std::cout << "Animal cat constractor" << std::endl;
}

Cat& Cat::operator=(Cat const &rhs){
    this->_type = rhs._type;
    _brain = new Brain();
    *_brain = *rhs._brain;
    return *(this);
}

void  Cat::makeSound() const
{
    std::cout << "->> Cat Sound" << std::endl;
}

Cat::~Cat(){
    delete _brain;
    std::cout << "Cat destractor" << std::endl;
}