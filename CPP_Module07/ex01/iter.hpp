/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 22:36:26 by rstride           #+#    #+#             */
/*   Updated: 2023/07/04 17:52:58 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void iter(T *addr, std::size_t len, void (*fp)(T))
{
	for(int i=0; i<len; i++)
	{
		fp(addr[i]);
	}
}

template <typename T>
void print(T target)
{
	std::cout << target << std::endl;
}
