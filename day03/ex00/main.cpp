/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 16:53:12 by ymarji            #+#    #+#             */
/*   Updated: 2021/08/29 14:26:18 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Species.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete i;
    delete j;
    delete meta;
    return 0;
}
