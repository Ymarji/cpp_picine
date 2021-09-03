/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 16:53:50 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/03 17:32:51 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
    return ;
}
Intern::Intern(Intern const &rhs){
    *this = rhs;
}
Intern & Intern::operator=(Intern const &){
    return *this;
}

Form	*Intern::creatFormShBnerry(std::string Target){
    return (new ShrubberyCreationForm(Target));
}
Form	*Intern::creatFormPesPardon(std::string Target){
    return (new PresidentialPardonForm(Target));
}
Form	*Intern::creatFormRoboot(std::string Target){
    return (new RobotomyRequestForm(Target));
}

Form	*Intern::makeForm(std::string Name, std::string Target){
    std::string tab[3] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
    Form *(Intern::*foo[3])(std::string);
    foo[0] = &Intern::creatFormShBnerry;
    foo[1] = &Intern::creatFormPesPardon;
    foo[2] = &Intern::creatFormRoboot;
    for (size_t i = 0; i < 3; i++)
    {
        if (Name == tab[i])
            return ((this->*foo[i])(Target));
    }
    std::cout << "Unknown Form Type" << std::endl;
    return 0;
}

Intern::~Intern(){
    return ;
}