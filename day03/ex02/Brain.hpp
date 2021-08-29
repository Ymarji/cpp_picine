/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:38:04 by ymarji            #+#    #+#             */
/*   Updated: 2021/08/28 18:38:05 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
    private:
        std::string _ideas[100];
    public:
        Brain();
        Brain(Brain const &);
        Brain& operator=(Brain const &);
        ~Brain();
};


#endif