/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:21:22 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:01:29 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

std::string Animal::getType() {
	return (type_);
}

Animal::Animal() :type_("none")
{
	std::cout << "Animal constructor" << std::endl;
	memo_ = new std::string("none");
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
	delete memo_;
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
	std::cout <<"[quiet]" << std::endl;
}