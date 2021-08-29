/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:38:07 by ymarji            #+#    #+#             */
/*   Updated: 2021/08/29 14:42:13 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Species.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    // Animal a;
    // Dog basic;
    // {
    //     Dog tmp = basic;
    // }

    std::cout << "--------------------------------" << std::endl;
    delete j;
    delete i;
}
