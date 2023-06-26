/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:20:51 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:49:57 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal(), type_("WrongCat")
{
	std::cout << "WrongCat constructor" << std::endl;
};

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
}

void WrongCat::makeSound()
{
	std::cout << "meow~~~ meow~" << std::endl;
}

std::string WrongCat::getType() {
	return (type_);
}