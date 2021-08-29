/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Species.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:38:12 by ymarji            #+#    #+#             */
/*   Updated: 2021/08/29 14:40:19 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPECISE_HPP
#define SPECISE_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{   private:
        Brain *_brain;
    public:
        Dog();
        Dog(Dog const &);
        Dog& operator=(Dog const &);
        void makeSound() const;
        ~Dog();
};

class Cat: public Animal
{
    private:
        Brain *_brain;
    public:
        Cat();
        Cat(Cat const &);
        Cat& operator=(Cat const &);
        void makeSound() const;
        ~Cat();
};

#endif
