/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:48:40 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:40:09 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat {
public:
	Bureaucrat();
	Bureaucrat(const std::string _name, int _grade);

	virtual ~Bureaucrat();

	Bureaucrat(const Bureaucrat &target);

	Bureaucrat &operator=(const Bureaucrat &target);

	std::string getName() const;
	unsigned getGrade() const;
	void setIncreaseGrade();
	void setDecreaseGrade();
	void signForm(Form &form);
	void executeForm(Form const &form);
	
	class GradeTooHighException : public std::exception {
	public:
		const char *what(void) const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		const char *what(void) const throw();
	};

private:
	const std::string name_ ;
	int grade_;

};

std::ostream& operator<<(std::ostream &outputStream, const Bureaucrat &ref);

#endif
