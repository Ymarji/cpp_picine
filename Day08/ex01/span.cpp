/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 15:50:01 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/22 16:03:01 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span():_N(0), _Pos(0){
	return ;
}

Span::Span(unsigned int N):_N(N), _Pos(0){
	return ;
}

Span::Span(Span const &rhs){
	*this = rhs;
}

Span &Span::operator=(Span const &rhs){
	if (this != &rhs)
	{
		this->_N = rhs._N;
		this->_Pos = rhs._Pos;
	}
	return (*this);
}

int		&Span::operator[](unsigned int  index){
	if (index < 0 || index >= _N || index >= _V.size())
		throw std::out_of_range("out of range");
	else{
		return (_V[index]);
	}
}

void	Span::addNumber(int Nb){
	if (_V.size() < _N)
		_V.push_back(Nb);
	else
		throw ContainerFull();
}

int		Span::shortestSpan( void ) const{
	int min;
	
	if (_V.size() < 2)
		throw Span::NoSpanToFind();
	else
	{
		std::vector<int> v = _V;
		std::sort(v.begin(), v.end());
		min = v[1] - v[0];
		for (size_t i = 1; i < v.size() - 1; i++)
			min = (min < (v[i + 1] - v[i]))? min :  v[i + 1] - v[i];
		return min;
	}
}

int		Span::longestSpan( void ) const{
	if (_V.size() < 2)
		throw Span::NoSpanToFind();
	else
		return ((*std::max_element(_V.begin(), _V.end())) - (*std::min_element(_V.begin(), _V.end())));
}
