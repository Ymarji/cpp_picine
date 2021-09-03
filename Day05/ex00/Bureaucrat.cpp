/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 16:50:03 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/03 16:50:04 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():
_Name(),
_Grade(150)
{
    return ;
}

Bureaucrat::Bureaucrat(std::string Name, int Grade):
_Name(Name),
_Grade(Grade)
{
    if (_Grade > 150)
       throw Bureaucrat::GradeTooLowException();
    if (_Grade < 1)
        throw Bureaucrat::GradeTooHighException();
    return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &rhs):
_Name(rhs._Name),
_Grade(rhs._Grade)
{
    return ;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &rhs){
    if (this != &rhs)
        _Grade = rhs._Grade;
    return *this;
}

std::string Bureaucrat::getName( void ) const{
    return (this->_Name);
}


int			Bureaucrat::getGrade( void ) const{
    return (this->_Grade);
}

void		Bureaucrat::gradeInc( void ){
    if (this->_Grade > 1)
        --(this->_Grade);
    else
        throw Bureaucrat::GradeTooHighException();
}

void		Bureaucrat::gradeDec( void ){
     if (this->_Grade < 150)
        ++(this->_Grade);
    else
        throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &rhs){
    os << "< " << rhs.getName() << ">, bureaucrat grade <" << rhs.getGrade() << ">." << std::endl;
    return os;
}

Bureaucrat::~Bureaucrat()
{
    return ;
}