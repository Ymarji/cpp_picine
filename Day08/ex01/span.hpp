/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 15:42:23 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/23 12:49:51 by ymarji           ###   ########.fr       */
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
		std::vector<int> getV(void) const{
			return this->_V;
		}
		template < typename T >
		void	addNumber(T itb, T ite)
		{
			if (std::distance(itb, ite) > static_cast<int>(_N - _V.size()))
				throw ContainerFull();
			else
				_V.insert(_V.end(), itb, ite);
		}

		int		shortestSpan( void ) const;
		int		longestSpan( void ) const;

		class	ContainerFull: public std::exception{
			const char * what () const throw ()
			{
				return "Container Full";
			}
		};
		
		class	ContainerSize : public std::exception{
			const char * what () const throw ()
			{
				return "Container isn't enough";
			}
		};
		
		class	NoSpanToFind: public std::exception{
			const char * what () const throw ()
			{
				return "Cant Find Span";
			}
		};
		~Span(){};
};

#endif /* SPAN_HPP */
