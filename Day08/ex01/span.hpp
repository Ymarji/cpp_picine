/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 15:42:23 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/21 18:50:18 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <stdexcept>
#include <iostream>
#include <vector>
#include <algorithm>

class Span{
	private:
		unsigned int    _N;
		unsigned int	_Pos;
		std::vector<int>	_V;
	public:
		Span();
		Span(unsigned int);
		Span(Span const &);
		
		Span	&operator=(Span const &);
		int		&operator[](unsigned int);
		
		void	addNumber(int);

		int		shortestSpan( void ) const;
		int		longestSpan( void ) const;

		class	ContainerFull: public std::exception{
			const char * what () const throw ()
			{
				return "Container Full";
			}
		};
		~Span(){};
};

#endif /* SPAN_HPP */
