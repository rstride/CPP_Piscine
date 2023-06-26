/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:35:20 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:06:44 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm","none", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : Form("ShrubberyCreationForm", _target, 145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ShrubberyCreationForm)
{

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ShrubberyCreationForm)
{
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
	 std::cout << "[ ShrubberyCreationForm : execute ]" << std::endl;

	if (getIsSigned() == false)
		throw IsnotSigned();
	if (getExecuteGrade() < executor.getGrade())
		throw LowGrade();
	makeTree();
}

void ShrubberyCreationForm::makeTree() {
	std::string filename = getTarget().append("_shrubbery");
	std::ifstream readFile;
	std::ofstream writeFile(filename);

	writeFile << "           {{ }{\n"
				 "          {{}}}{{\n"
				 "        {{}}{}}\n"
				 "           }}}}{\n"
				 "          {{}}}\n"
				 "         }{{}{}}\n"
				 "           {{}{}}\n"
				 "         }}{{}}\n"
				 "          {{}}{{\n"
				 "           \\  /\n"
				 "        .-''| |``-.\n"
				 "       '-._/_o_\\_.-'\n"
				 "        `._     _.'\n"
				 "         | :F_P: |\n"
				 "         `._    .'\n"
				 "            `--'";

	writeFile.close();
}
