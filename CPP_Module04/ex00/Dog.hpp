/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:19:27 by rstride           #+#    #+#             */
/*   Updated: 2023/06/06 10:19:30 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog :  public Animal
{
	// OCCP
public:
	Dog();
	~Dog();
	Dog(const Dog &target);
	Dog& operator=(const Dog &target);

	std::string getType();
	void makeSound();
protected:
	std::string type_;

};

#endif