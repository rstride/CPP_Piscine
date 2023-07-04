/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 22:56:30 by rstride           #+#    #+#             */
/*   Updated: 2023/07/04 17:48:31 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
};

template <typename T>
T min(T &a, T &b)
{
	if (a < b)
		return a;
	else 
		return b;
};
template <typename T>

T max(T &a, T &b)
{
	if (a > b)
		return a;
	else 
		return b;
};
