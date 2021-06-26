/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:34:09 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/25 11:37:16 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <string.h>

class Karen{
	private :
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public :
		void complain( std::string level );
};
#endif