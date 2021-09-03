/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 16:53:48 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/03 16:53:49 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include <time.h>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string	const	_Name;
		bool				_Signed;
		int			const	_GradeToSign;
		int			const	_GradeToExec;
		std::string			_Target;
	public:
		Form();
		Form(std::string, bool, int , int);
		Form(Form const &);

		Form & operator=(Form const &);

		std::string getName( void ) const;
		bool	getSignStat( void ) const;
		int		getSignGrade( void ) const;
		int		getExecGrade( void ) const;

		void	setTarget(std::string);
		std::string getTarget(void) const;

		void	beSigned(Bureaucrat &);

		void	execute(Bureaucrat const & ) const;
		virtual void	formWork() const = 0;

		class GradeTooHighException : public std::exception
		{
			const char * what () const throw (){
				return ("Grade Too High");
			}
		};

		class FormUnsigned: public std::exception
		{
			const char * what () const throw (){
				return ("Unsined Form");
			}
		};

		class GradeTooLowException : public std::exception
		{
			const char * what () const throw (){
				return ("Grade Too Low");
			}
		};

		virtual ~Form();
};

std::ostream &operator<<(std::ostream &os, Form const &rhs);

#endif
