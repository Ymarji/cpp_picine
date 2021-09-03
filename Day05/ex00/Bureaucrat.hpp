/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 16:50:05 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/03 17:35:41 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

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
		~Bureaucrat();

	class GradeTooHighException : public std::exception
	{
		const char * what () const throw (){
			return ("Bureaucrat Grade Too High \n");
		}
	};
	class GradeTooLowException : public std::exception
	{
		const char * what () const throw (){
			return ("Bureaucrat Grade Too Low \n");
		}
	};
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &rhs);

#endif
