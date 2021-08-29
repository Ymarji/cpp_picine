/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 14:46:24 by ymarji            #+#    #+#             */
/*   Updated: 2021/08/29 14:58:44 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource():
_AMnum(0){
    InitInv();
}

MateriaSource::MateriaSource(MateriaSource const & rhs){
    this->_AMnum = rhs._AMnum;
    DestroyInv();
    for (int i = 0; i < this->_AMnum; i++)
    {
        this->_MatMemo[i] = rhs._MatMemo[i]->clone();
    }
}

MateriaSource& MateriaSource::operator= (MateriaSource const &rhs){
    this->_AMnum = rhs._AMnum;
    DestroyInv();
    for (int i = 0; i < this->_AMnum; i++)
    {
        this->_MatMemo[i] = rhs._MatMemo[i]->clone();
    }
    return *(this);
}

void	MateriaSource::InitInv(){
    for (int i = 0; i < 4; i++)
    {
        this->_MatMemo[i] = NULL;
    }
}

void MateriaSource::DestroyInv(){
    for (int i = 0; i < this->_AMnum; i++)
    {
        delete this->_MatMemo[i];
        this->_MatMemo[i] = NULL;
    }
}

void MateriaSource::learnMateria(AMateria* m){
    if(m && _AMnum < 4)
    {
        this->_MatMemo[_AMnum++] = m;
    }
    else if (!m)
		std::cout << "Materia Learn failed" << std::endl;
    else
        std::cout << "Inventory Full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type){
    for (int i = 0; i < _AMnum; i++)
    {
        if (_MatMemo[i]->getType() == type)
        {
            return(_MatMemo[i]->clone());
        }
    }
    std::cout << "No Materia Found" << std::endl;
    return (0);
}

MateriaSource::~MateriaSource(){
    DestroyInv();
}