/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:24:26 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:02:32 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	type_ = "Cat";
	brain_ = new Brain();
	std::cout << "Cat constructor" << std::endl;
};

Cat::~Cat()
{
	delete brain_;
	std::cout << "Cat destructor" << std::endl;
}

Cat::Cat(const Cat &target)
{
	for (int i=0; i<100; i++)
	{
		brain_->ideas[i] = target.brain_->ideas[i];
	}
	type_ = target.type_;
}

Cat& Cat::operator= (const Cat &target) {
	type_ = target.type_;
	for (int i=0; i<100; i++)
	{
		brain_->ideas[i] = target.brain_->ideas[i];
	}
	return (*this);
};

void Cat::makeSound()
{
	std::cout << "meow~~~ meow~" << std::endl;
}

std::string Cat::getType() {
	return (type_);
}