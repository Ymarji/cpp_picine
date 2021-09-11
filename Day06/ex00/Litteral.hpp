/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Litteral.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 13:29:43 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/09 13:55:00 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LITTERAL_HPP
#define LITTERAL_HPP

#include <string>
#include <limits>
#include <iostream>
#include <iomanip>
#define     CHART   1
#define     INTT    2
#define     FLOATT    3
#define     DOUBLET    4
#define     NAN     5
#define     INF

class Litteral
{
    private:
        char * _arg;
        char    _c;
        int     _nI;
        double  _nD;
        float   _nF;
        int     _type;
        int     _pres;
    public:
        Litteral();
        Litteral(char *);
        Litteral(Litteral const &);

        void    checkArg();
        void    printArg();
        void    argToChar();
        void    argToInt();
        void    argToDouble();
        void    argToFloat();

        Litteral &operator=(Litteral const &);

        ~Litteral();
};
#endif /* LITTERAL_HPP */
