/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 11:58:15 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/11 15:28:48 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main(){
    Data    dt;
    std::cout << &dt;
    dt.Nbr = 42;
    dt.Str = "1337";
    dt.c    = 'a';
    
    std::cout << " " << dt.Nbr << " " << dt.Str << " " << dt.c << std::endl;

    uintptr_t tmp = serialize(&dt);

    Data *dt_R = deserialize(tmp);
    std::cout << dt_R << " ";
    std::cout << dt_R->Nbr << " " << dt_R->Str << " " << dt_R->c << std::endl;
    return 0;
}