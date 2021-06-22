/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 16:34:07 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/22 10:36:49 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
#include "Brain.hpp"

class Human{
	private:
		Brain const _brain;
	public:
		Human(){}
		std::string	identify() const;
		Brain const &		getBrain();
};
#endif