/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:18:48 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:49:38 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	type_ = "Dog";
	std::cout << "Dog constructor" << std::endl;
};

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
}

void Dog::makeSound()
{
	std::cout << "Woof woof!!" << std::endl;
}

std::string Dog::getType() {
	return (type_);
}