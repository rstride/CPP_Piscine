/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 21:27:36 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:42:40 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <deque>
#include <list>
#include <vector>

template <typename T>
void Print(T& container,typename T::iterator iter)
{
	if (iter == container.end())
		std::cerr << "Not Found.." << std::endl;
	else
		std::cout << *iter << std::endl;
}


int main(void)
{
	std::deque<int>		d;
	std::list<int>		l;
	std::vector<int>	v;

	for (int i=0 ; i < 10; i++)
	{
		v.push_back(i);
		d.push_back(i);
		l.push_back(i);
	}

	::Print(d, easyfind(d, 0));
	::Print(d, easyfind(d, 10));
	::Print(l, easyfind(l, 3));
	::Print(l, easyfind(l, 10));
	::Print(v, easyfind(v, 4));
	::Print(d, easyfind(d, 10));
	return (0);
}