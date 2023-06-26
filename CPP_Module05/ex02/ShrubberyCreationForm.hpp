/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2023/06/17 17:35:31 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:41:13 by rstride          ###   ########.fr       */
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
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &ShrubberyCreationForm);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &ShrubberyCreationForm);

	void execute(Bureaucrat const &executor);

private:
	void makeTree();
};

#endif
=======
/*   Created: 2023/06/20 20:00:16 by rstride           #+#    #+#             */
/*   Updated: 2023/06/20 20:01:20 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
    std::string _target;
    ShrubberyCreationForm();
    
public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &src);
    virtual ~ShrubberyCreationForm();

    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);

    virtual void execute(Bureaucrat const &executor) const;
};

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &rhs);
>>>>>>> refs/remotes/origin/main
