/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Species.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 16:53:02 by ymarji            #+#    #+#             */
/*   Updated: 2021/08/29 14:26:43 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPECISE_HPP
#define SPECISE_HPP

#include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog();
        Dog(Dog const &);
        Dog& operator=(Dog const &);
        virtual void makeSound() const;
        virtual ~Dog();
};

class Cat: public Animal
{
    public:
        Cat();
        Cat(Cat const &);
        Cat& operator=(Cat const &);
        virtual void makeSound() const;
        virtual ~Cat();
};

#endif
