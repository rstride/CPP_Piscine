/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:20:59 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:50:00 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat :  public WrongAnimal
{
	// OCCP
public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat &target);
	WrongCat& operator=(const WrongCat &target);

	std::string getType();
	void makeSound();
protected:
	std::string type_;

};


#endif