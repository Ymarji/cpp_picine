/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 16:44:25 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/09 13:38:39 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Litteral.hpp"

void    execute(Litteral &Lit)
{
    Lit.checkArg();
    Lit.argToChar();
    Lit.argToInt();
    Lit.argToDouble();
    Lit.argToFloat();
    Lit.printArg();
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        Litteral Lit(av[1]);
        execute(Lit);
    }
    else{
        std::cout << "Num of Arg Invalide" << std::endl;
    }
    return 0;
}