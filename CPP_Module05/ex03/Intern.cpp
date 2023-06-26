/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:50:41 by rstride           #+#    #+#             */
/*   Updated: 2023/06/25 23:59:44 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

const char* Intern::UnknownForm::what() const throw()
{
	return ("It's an unknown format name.");
}

Intern::Intern()
{
}

Intern::~Intern()
{
	for(int i = 0; i < 3; i++)
		delete forms[i];
}

Intern::Intern(const Intern &_target)
{
	forms[0] = _target.forms[0];
	forms[1] = _target.forms[1];
	forms[2] = _target.forms[2];
}

Intern &Intern::operator=(const Intern &_target)
{
	return (*this);
}

Form *Intern::makeForm(const std::string _formName, const std::string _formTarget)
{
	forms[0] = new ShrubberyCreationForm(_formTarget);
	forms[1] = new RobotomyRequestForm(_formTarget);
	forms[2] = new PresidentPardonForm(_formTarget);

	// Form 목록중에 존재하는지 확인
	for(int i=0; i<3; i++)
	{
		if (_formName == forms[i]->getFormName())
			return (forms[i]);
	}
	throw UnknownForm();
}

