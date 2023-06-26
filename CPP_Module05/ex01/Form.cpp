/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride<rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:06:36 by rstride          #+#    #+#             */
/*   Updated: 2023/06/12 13:14:21 by rstride         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :name_("none"), isSigned_(false), gradeSign_(150), gradeExec_(150)
{
}

Form::Form(const std::string name, int gradeSign, int gradeExec) : name_(name), isSigned_(false), gradeSign_(gradeSign), gradeExec_(gradeExec)
{
    if (gradeSign < 1 || gradeExec < 1)
        throw Form::GradeTooHighException();
    else if (gradeSign > 150 || gradeExec > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &target) : name_(target.name_), isSigned_(target.isSigned_), gradeSign_(target.gradeSign_), gradeExec_(target.gradeExec_)
{
}

Form& Form::operator= (const Form &target)
{
    if (this == &target)
        return (*this);
    this->isSigned_ = target.isSigned_;
    return (*this);
}

Form::~Form()
{
}

std::string Form::getName() const
{
    return (this->name_);
}

bool Form::getIsSigned() const
{
    return (this->isSigned_);
}

int Form::getGradeSign() const
{
    return (this->gradeSign_);
}

int Form::getGradeExec() const
{
    return (this->gradeExec_);
}

void Form::beSigned(Bureaucrat &target)
{
    if (target.getGrade() > this->gradeSign_)
        throw Form::GradeTooLowException();
    this->isSigned_ = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}

std::ostream& operator<< (std::ostream &out, const Form &target)
{
    out << target.getName() << " is ";
    if (target.getIsSigned() == true)
        out << "signed";
    else
        out << "not signed";
    out << " and requires a grade " << target.getGradeSign() << " to sign and a grade " << target.getGradeExec() << " to execute" << std::endl;
    return (out);
}

