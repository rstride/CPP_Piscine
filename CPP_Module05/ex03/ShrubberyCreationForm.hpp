/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:35:31 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:06:36 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <iostream>

class Bureaucrat;

class ShrubberyCreationForm : public virtual Form
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string _target);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &ShrubberyCreationForm);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &ShrubberyCreationForm);

	void execute(Bureaucrat const &executor);

private:
	void makeTree();
};

#endif
