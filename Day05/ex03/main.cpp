/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 16:53:54 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/03 17:33:34 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
int main()
{	
	std::cout << "First part" << std::endl;
	try {
		Bureaucrat max("Max", 143);

		Bureaucrat henery("Henery", 1);
		
		Intern form;
		Form *berry = form.makeForm("Shrubbery Creation", "Stats");
		Form *Bot = form.makeForm("Robotomy Request", "Bot");
		Form *mail = form.makeForm("Presidential Pardon", "mail");

		max.signForm(*berry);
		max.executeForm(*berry);
		henery.signForm(*berry);
		henery.executeForm(*berry);
		std::cout << "========================================================" << std::endl;
		max.signForm(*Bot);
		max.executeForm(*Bot);
		henery.signForm(*Bot);
		henery.executeForm(*Bot);
		std::cout << "========================================================" << std::endl;
		max.signForm(*mail);
		max.executeForm(*mail);
		henery.signForm(*mail);
		henery.executeForm(*mail);
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}