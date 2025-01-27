/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:22:26 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:02:01 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	// OCCP
public:
	Dog();
	virtual ~Dog();
	Dog(const Dog &target);
	Dog& operator=(const Dog &target);

	std::string getType();
	void makeSound();

private:
	Brain *brain_;

};

#endif