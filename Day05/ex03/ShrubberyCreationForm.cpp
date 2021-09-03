/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 16:52:59 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/03 16:53:00 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string Target):Form("Shrubbery Creation", false, 145, 137){
	setTarget(Target);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &rhs):Form(rhs){
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs){
	Form::operator=(rhs);
	return *this;
}

void	ShrubberyCreationForm::formWork() const {
		std::ofstream newFile("<" + this->getTarget() +">_shrubbery");
		if (newFile.fail()){
			throw std::ios::failure( " Error in file! ");
		}
		else{
			newFile << "               ,@@@@@@@,"  << std::endl;
			newFile << "       ,,,.   ,@@@@@@/@@,  .oo8888o."  << std::endl;
			newFile << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o"  << std::endl;
			newFile << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'"  << std::endl;
			newFile << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'"  << std::endl;
			newFile << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'"  << std::endl;
			newFile << "   `&%\\ ` /%&'    |.|        \\ '|8'"  << std::endl;
			newFile << "       |o|        | |         | |"  << std::endl;
			newFile << "       |.|        | |         | |"  << std::endl;
			newFile << "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_ "  << std::endl;
			newFile.close();
		}
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	
}