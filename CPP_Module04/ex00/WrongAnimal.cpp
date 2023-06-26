/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:20:23 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:49:50 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

std::string WrongAnimal::getType() {
	return (type_);
}

WrongAnimal::WrongAnimal() :type_("none_type")
{
	std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal &target) {
	type_ = target.type_;
	return (*this);
};


void WrongAnimal::makeSound()
{
	std::cout <<"[none]" << std::endl;
}