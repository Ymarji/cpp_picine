/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 15:30:29 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/11 15:30:30 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP
#include <iostream>
#include <time.h>
#include <string>

class Base
{
    private:
    public:
        virtual ~Base(){};
};
class A: public Base{};
class B: public Base{};
class C: public Base{};

Base * generate(void);
void identify(Base* p);
#endif /* BASE_HPP */
