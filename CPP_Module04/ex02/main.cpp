/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:13:28 by rstride           #+#    #+#             */
/*   Updated: 2023/06/06 10:23:31 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include <string>

int main()
{
//	Animal test;
	Animal *animal[10];


	for (int i=0; i<10; i++)
	{
		if (i<5)
			animal[i] = new Dog;
		else
			animal[i] = new Cat;
	}

	for (int i=0; i<10; i++)
	{
		std::cout << animal[i]->getType() << std::endl;
	}
}
