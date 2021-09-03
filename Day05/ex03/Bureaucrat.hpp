/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 16:53:37 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/03 16:53:38 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string const	_Name;
		int					_Grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string, int);
		Bureaucrat(Bureaucrat const &);

		Bureaucrat & operator=(Bureaucrat const &);

		std::string getName( void ) const;
		int			getGrade( void ) const;
		void		gradeInc( void );
		void		gradeDec( void );
		void		signForm(Form &);

		void		executeForm(Form const & form);

		~Bureaucrat();
		class GradeTooHighException : public std::exception
		{
			const char * what () const throw (){
				return ("Grade Too High \n");
			}
		};
		class GradeTooLowException : public std::exception
		{
			const char * what () const throw (){
				return ("Grade Too Low \n");
			}
		};
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &rhs);

#endif
