/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 16:50:20 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/03 17:00:21 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():
_Name(""),
_Signed(false),
_GradeToSign(0),
_GradeToExec(0){
    return ;
}

Form::Form(std::string Name, int GradeToSign, int GradeToExec):
_Name(Name),
_Signed(false),
_GradeToSign(GradeToSign),
_GradeToExec(GradeToExec){
    if (_GradeToExec > 150 || _GradeToSign > 150)
        throw Form::GradeTooLowException();
    if (_GradeToExec < 1 || _GradeToSign < 1)
        throw Form::GradeTooHighException();
    return ;
}

Form::Form(Form const &rhs):
_Name(rhs._Name),
_Signed(rhs._Signed),
_GradeToSign(rhs._GradeToSign),
_GradeToExec(rhs._GradeToExec){
    return ;
}

Form & Form::operator=(Form const &rhs){
    if (this != &rhs)
    {
        this->_Signed = rhs._Signed;
    }
    return *this;
}

std::ostream &operator<<(std::ostream &os, Form const &rhs){
    os << "Form <" << rhs.getName() << "> Grade to sign <" << rhs.getSignGrade() << "> Grade to exec <" << rhs.getExecGrade() << "> statu : " << rhs.getSignStat() << std::endl;
    return os;
}

std::string Form::getName( void ) const{
    return (this->_Name);
}
bool Form::getSignStat( void ) const{
    return (this->_Signed);
}
int Form::getSignGrade( void ) const{
    return (this->_GradeToSign);
}
int Form::getExecGrade( void ) const{
    return (this->_GradeToExec);
}

void	Form::beSigned(Bureaucrat &br){
    if (br.getGrade() <= this->getSignGrade())
        this->_Signed = true;
    else
        throw Form::GradeTooLowException();
}

Form::~Form(){
    return ;
}