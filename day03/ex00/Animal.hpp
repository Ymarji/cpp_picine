/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 16:53:10 by ymarji            #+#    #+#             */
/*   Updated: 2021/08/28 16:53:10 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(Animal const &);
        Animal& operator=(Animal const &);
        virtual void makeSound() const;
        std::string getType() const;
        virtual ~Animal();
};

#endif