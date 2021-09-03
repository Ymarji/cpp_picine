/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 16:50:22 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/03 17:10:32 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <ostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string	const	_Name;
		bool				_Signed;
		int			const	_GradeToSign;
		int			const	_GradeToExec;
	public:
		Form();
		Form(std::string, int , int);
		Form(Form const &);

		Form & operator=(Form const &);

		std::string getName( void ) const;
		bool	getSignStat( void ) const;
		int		getSignGrade( void ) const;
		int		getExecGrade( void ) const;
		void	beSigned(Bureaucrat &);
		class GradeTooHighException : public std::exception
		{
			const char * what () const throw (){
				return ("Form Grade Too High");
			}
		};
		class GradeTooLowException : public std::exception
		{
			const char * what () const throw (){
				return ("Form Grade Too Low");
			}
		};

		~Form();
};

std::ostream &operator<<(std::ostream &os, Form const &rhs);

#endif
