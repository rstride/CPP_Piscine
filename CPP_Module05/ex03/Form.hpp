/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 20:47:55 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:39:46 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{
public:
	Form();
	Form(std::string _FormName, const std::string _FormTarget, int _requiredGrade, int _executedGrade);
	virtual ~Form();
	Form(const Form &target);
	Form &operator=(const Form &target);

	void beSigned(Bureaucrat &target);

	std::string getFormName() const;
	std::string getTarget() const;
	bool getIsSigned() const;
	int getRequiredGrade() const;
	int getExecuteGrade() const;
	virtual void execute(Bureaucrat const &executor) = 0;
	
	class GradeTooHighException : public std::exception {
	public:
		const char *what(void) const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		const char *what(void) const throw();
	};
	class IsnotSigned : public std::exception {
	public:
		const char *what(void) const throw();
	};
	class LowGrade : public std::exception {
	public:
		const char *what(void) const throw();
	};

private:
	std::string formName_;
	std::string formTarget_;
	bool isSigned_;
	int requiredGrade_;
	int executedGrade_;
};

std::ostream& operator<<(std::ostream &outputStream, const Form &ref);


#endif
