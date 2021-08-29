/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:38:27 by ymarji            #+#    #+#             */
/*   Updated: 2021/08/29 14:37:26 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Species.hpp"

int main()
{
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();

    // Dog basic;
    // {
    //     Dog tmp = basic;
    // }
    Animal *t[10];
    
    for (int i=0;i<10;i++)
    {
        if (i < 5)
            t[i] = new Dog();
        else
            t[i] = new Cat();
    }

    std::cout << "--------------------------------" << std::endl;
    // delete j;
    // delete i;
    for (int i=0;i<10;i++)
    {
        delete t[i];
    }

}
