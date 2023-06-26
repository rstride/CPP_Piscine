/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentPardonForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:34:52 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:39:14 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentPardonForm.hpp"

PresidentPardonForm::PresidentPardonForm() : Form::Form("PresidentPardonForm", "none", 25, 5)
{
}

PresidentPardonForm::PresidentPardonForm(std::string _target) : Form::Form("PresidentPardonForm", _target, 25, 5)
{
}

PresidentPardonForm::~PresidentPardonForm()
{

}

PresidentPardonForm::PresidentPardonForm(const PresidentPardonForm &PresidentPardonForm)
{

}

PresidentPardonForm &PresidentPardonForm::operator=(const PresidentPardonForm &ShrubberyCreationForm)
{
	return (*this);
}

void PresidentPardonForm::execute(Bureaucrat const &executor)
{
	std::cout << "[ PresidentPardonForm : execute]" << std::endl;
	if (getIsSigned() == false)
		throw IsnotSigned();
	if (getExecuteGrade() < executor.getGrade())
		throw LowGrade();
	pardon();
}

void PresidentPardonForm::pardon() {
	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
