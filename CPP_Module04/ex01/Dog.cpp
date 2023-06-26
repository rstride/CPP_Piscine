/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:22:18 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:01:56 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructeur par défaut qui initialise type_ à "Dog" et crée un nouveau cerveau pour le chien
Dog::Dog(void) : Animal()
{
	type_ = "Dog";
	brain_ = new Brain();
	std::cout << "Dog constructor" << std::endl;
};

// Destructeur qui libère la mémoire allouée pour le cerveau du chien
Dog::~Dog()
{
	delete brain_;
	std::cout << "Dog destructor" << std::endl;
}

// Constructeur de copie qui copie le contenu du cerveau du chien cible dans le cerveau du chien actuel et copie le type
Dog::Dog(const Dog &target)
{
	for (int i=0; i<100; i++)
	{
		brain_->ideas[i] = target.brain_->ideas[i];
	}
	type_ = target.type_;
}

// Surcharge de l'opérateur d'affectation qui copie le type et le contenu du cerveau du chien cible dans le chien actuel
Dog& Dog::operator= (const Dog &target) {
	type_ = target.type_;
	for (int i=0; i<100; i++)
	{
		brain_->ideas[i] = target.brain_->ideas[i];
	}
	return (*this);
};

// Méthode qui simule le son que fait le chien
void Dog::makeSound()
{
	std::cout << "Woof woof!!" << std::endl;
}

// Méthode qui renvoie le type de l'animal, dans ce cas "Dog"
std::string Dog::getType() {
	return (type_);
}
