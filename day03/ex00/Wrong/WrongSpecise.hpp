/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongSpecise.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 16:53:02 by ymarji            #+#    #+#             */
/*   Updated: 2021/08/28 17:22:15 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPECISE_HPP
#define SPECISE_HPP

#include "WrongAnimal.hpp"

class WrongDog: public WrongAnimal
{
    public:
        WrongDog();
        WrongDog(WrongDog const &);
        WrongDog& operator=(WrongDog const &);
        void makeSound() const;
        ~WrongDog();
};

class WrongCat: public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(WrongCat const &);
        WrongCat& operator=(WrongCat const &);
        void makeSound() const;
        ~WrongCat();
};

#endif
