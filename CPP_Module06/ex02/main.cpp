/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 18:03:39 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:42:00 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>
#include <random>

Base *generate(void)
{
	Base *rtn;

	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(1, 3);
	int random = dis(gen);
	if (random == 1)
		rtn = new A;
	else if (random == 2)
		rtn = new B;
	else if (random == 3)
		rtn = new C;
	return (rtn);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
	try {
		A &a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(std::bad_cast) {
	}
	try {
		B &b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(std::bad_cast) {
	}
	try {
		C &c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(std::bad_cast) {
	}

}

int main(void)
{

	for(int i=0; i<3; i++)
	{
		Base *base = generate();
		identify(base);
		identify(*base);
	}
}
