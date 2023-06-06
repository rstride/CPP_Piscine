/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:24:06 by rstride           #+#    #+#             */
/*   Updated: 2023/06/06 10:24:07 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	type_ = "Dog";
	brain_ = new Brain();
	std::cout << "Dog constructor" << std::endl;
};

Dog::~Dog()
{
	delete brain_;
	std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(const Dog &target)
{
	for (int i=0; i<100; i++)
	{
		brain_->ideas[i] = target.brain_->ideas[i];
	}
	type_ = target.type_;
}

Dog& Dog::operator= (const Dog &target) {
	type_ = target.type_;
	for (int i=0; i<100; i++)
	{
		brain_->ideas[i] = target.brain_->ideas[i];
	}
	return (*this);
};

void Dog::makeSound()
{
	std::cout << "Woof woof!!" << std::endl;
}

std::string Dog::getType() {
	return (type_);
}
