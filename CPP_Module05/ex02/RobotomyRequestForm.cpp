/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2023/06/17 17:36:02 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 00:01:12 by rstride          ###   ########.fr       */
=======
/*   Created: 2023/06/20 20:00:12 by rstride           #+#    #+#             */
/*   Updated: 2023/06/20 20:12:21 by rstride          ###   ########.fr       */
>>>>>>> refs/remotes/origin/main
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

<<<<<<< HEAD
RobotomyRequestForm::RobotomyRequestForm() : Form::Form("RobotomyRequestForm", "none", 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : Form::Form("RobotomyRequestForm", _target, 72, 45)
=======
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src), _target(src._target)
>>>>>>> refs/remotes/origin/main
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
<<<<<<< HEAD

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
=======
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
    if (this != &rhs)
    {
        Form::operator=(rhs);
        this->_target = rhs._target;
    }
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    std::cout << "* drilling noises *" << std::endl;
    if (rand() % 2)
        std::cout << this->_target << " has been robotomized successfully" << std::endl;
    else
        std::cout << this->_target << " robotomization failed" << std::endl;
}

std::ostream &operator<<(std::ostream &o, RobotomyRequestForm const &rhs)
{
    o << rhs.getName() << " is " << (rhs.getSigned() ? "signed" : "not signed") << " and require grade " << rhs.getGradeToSign() << " to be signed and grade " << rhs.getGradeToExecute() << " to be executed";
    return (o);
}

std::string RobotomyRequestForm::getTarget() const
{
    return (this->_target);
}

void RobotomyRequestForm::setTarget(std::string target)
{
    this->_target = target;
}

>>>>>>> refs/remotes/origin/main
