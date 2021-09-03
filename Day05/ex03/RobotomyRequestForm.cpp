/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 16:53:24 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/03 16:54:01 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string Target):Form("Robotomy Request", false, 72, 45){
	setTarget(Target);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rhs):Form(rhs){
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs){
	Form::operator=(rhs);
	return *this;
}

void	RobotomyRequestForm::formWork() const {

    std::cout << "drilling noises" << std::endl;

    srand(time(NULL));
    int i = rand() % 2;
    if (!i)
        std::cout << "Failure" << std::endl;
    else
        std::cout << this->getTarget() << "has been robotomized successfully" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	
}