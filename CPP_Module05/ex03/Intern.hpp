/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:50:44 by rstride           #+#    #+#             */
/*   Updated: 2023/06/25 23:59:44 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Intern
{
public:
	Intern(void);
	virtual ~Intern(void);
	Intern(const Intern &_target);
	Intern &operator=(const Intern &_target);

	Form *makeForm(std::string _formName, std::string _fromTarget);

	class UnknownForm : public std::exception {
	public:
		const char *what(void) const throw();
	};

private:
	Form *forms[3];


};

#endif
