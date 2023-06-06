/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:20:33 by rstride           #+#    #+#             */
/*   Updated: 2023/06/06 10:20:35 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include <string>

class WrongAnimal
{
public:
	// OCCP
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(const WrongAnimal &target) {type_ = target.type_;};

	WrongAnimal& operator= (const WrongAnimal &target);

	void makeSound();
	virtual std::string getType();

protected:
	std::string type_;

private:

};

#endif