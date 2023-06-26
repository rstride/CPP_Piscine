/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:18:31 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:49:31 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal(), type_("Cat")
{
	std::cout << "Cat constructor" << std::endl;
};

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound()
{
	std::cout << "meow~~~ meow~" << std::endl;
}

std::string Cat::getType() {
	return (type_);
}