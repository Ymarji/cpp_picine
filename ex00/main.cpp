/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 11:32:59 by ymarji            #+#    #+#             */
/*   Updated: 2021/06/20 11:41:03 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Pony.hpp"

void	ponyOnTheHeap(){
	Pony *heap_pony = new Pony("heap");
	delete heap_pony;
}

void	ponyOnTheStack(){
	Pony stack_pony("stack");
}

int	main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return 0;
}