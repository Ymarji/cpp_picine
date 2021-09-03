/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 16:53:56 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/03 16:53:57 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string Target):Form("Presidential Pardon", false, 25, 5){
	setTarget(Target);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &rhs):Form(rhs){
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs){
	Form::operator=(rhs);
	return *this;
}

void	PresidentialPardonForm::formWork() const {
    std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	
}