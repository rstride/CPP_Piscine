/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:25:02 by rstride           #+#    #+#             */
/*   Updated: 2023/06/06 10:25:05 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

std::string Animal::getType() {
	return (type_);
}

Animal::Animal() :type_("none")
{
	std::cout << "Animal constructor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

Animal::Animal(const Animal &target)
{
	type_ = target.type_;
}

Animal& Animal::operator= (const Animal &target) {
	type_ = target.type_;
	return (*this);
};

void Animal::makeSound()
{
	std::cout << "none" << std::endl;
}