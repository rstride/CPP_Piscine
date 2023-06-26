/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2023/06/16 20:47:51 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:40:40 by rstride          ###   ########.fr       */
=======
/*   Created: 2023/06/12 13:06:36 by rstride           #+#    #+#             */
/*   Updated: 2023/06/20 20:03:29 by rstride          ###   ########.fr       */
>>>>>>> refs/remotes/origin/main
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

const char* Form::GradeTooHighException::what() const throw()
{
	return ("[Grade Too High Exception]\nGrade 1 is the highest grade, so you can't raise your grade any more.");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("[Grade Too Low Exception]\nThe grade 150 is the lowest, so you can't lower the grade any more.");
}

const char* Form::IsnotSigned::what() const throw()
{
	return ("It's not signed");
}

const char* Form::LowGrade::what() const throw()
{
	return ("The execution rating is insufficient.");
}

Form::Form()
{
	isSigned_ = 0;
	requiredGrade_ = 0;
	executedGrade_ = 0;
}

Form::Form(std::string _formName, const std::string _formTarget, int _requiredGrade, int _executedGrade)
{
	isSigned_ = 0;
	formName_ = _formName;
	if (_requiredGrade < 1 || _executedGrade < 1 )
		throw GradeTooHighException();
	else if (_requiredGrade > 150 || _executedGrade > 150 )
		throw GradeTooLowException();

	requiredGrade_ = _requiredGrade;
	executedGrade_ = _executedGrade;
	formTarget_ = _formTarget;
}

Form::~Form()
{

}

Form::Form(const Form &target) {
	formName_ = target.formName_;
	isSigned_ = target.isSigned_;
	executedGrade_ = target.executedGrade_;
	requiredGrade_ = target.requiredGrade_;
}

Form &Form::operator=(const Form &target)
{
	formName_ = target.formName_;
	isSigned_ = target.isSigned_;
	executedGrade_ = target.executedGrade_;
	requiredGrade_ = target.requiredGrade_;
	return (*this);
}

std::string Form::getFormName() const
{
	return (formName_);
}
bool Form::getIsSigned() const
{
	return (isSigned_);
}

int Form::getRequiredGrade() const
{
	return (requiredGrade_);
}

int Form::getExecuteGrade() const
{
	return (executedGrade_);
}

std::string Form::getTarget() const
{
	return(formTarget_);
}

void Form::beSigned(Bureaucrat &target) {
	if (target.getGrade() <= requiredGrade_)
		isSigned_ = 1;
}

void Form::execute(Bureaucrat const &executor)
{}

std::ostream& operator<<(std::ostream &outputStream, const Form &ref)
{
	outputStream <<
	"[ " << ref.getFormName() << " ]" << std::endl
	<< "Required grade : " << ref.getRequiredGrade()  << std::endl
	<< "Executed grade : " << ref.getExecuteGrade()  << std::endl;
	return (outputStream);
}
