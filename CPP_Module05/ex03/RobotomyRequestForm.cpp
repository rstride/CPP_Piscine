/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:36:02 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:39:04 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form::Form("RobotomyRequestForm", "none", 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : Form::Form("RobotomyRequestForm", _target, 72, 45)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &RobotomyRequestForm)
{

}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &RobotomyRequestForm)
{
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor)
{
	std::cout << "[ RobotomyRequestForm : execute]" << std::endl;
	if (getIsSigned() == false)
		throw IsnotSigned();
	if (getExecuteGrade() < executor.getGrade())
		throw LowGrade();
	Robotization();
}

void RobotomyRequestForm::Robotization()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(0, 1);

	std::cout << "Drrrrrrrr... Drrrrrr... Drr!" << std::endl;
	if (dis(gen) == 0)
	{
		std::cout << Form::getTarget() << " has become a robot." << std::endl;
	}
	else
	{
		std::cout << "Fail.... :(" << std::endl;
	}
}
