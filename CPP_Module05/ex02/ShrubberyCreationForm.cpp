/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2023/06/17 17:35:20 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:41:12 by rstride          ###   ########.fr       */
=======
/*   Created: 2023/06/20 20:00:15 by rstride           #+#    #+#             */
/*   Updated: 2023/06/20 20:03:57 by rstride          ###   ########.fr       */
>>>>>>> refs/remotes/origin/main
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

<<<<<<< HEAD
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
=======
ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137)
{
    this->setTarget("default");
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
    this->setTarget(target);
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src)
{
    *this = src;
    return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
    if (this != &rhs)
    {
        this->setTarget(rhs.getTarget());
    }
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    std::ofstream ofs(this->getTarget() + "_shrubbery");
    ofs << "       _-_" << std::endl;
    ofs << "    /~~   ~~\\" << std::endl;
    ofs << " /~~         ~~\\" << std::endl;
    ofs << "{               }" << std::endl;
    ofs << " \\  _-     -_  /" << std::endl;
    ofs << "   ~  \\\\ //  ~" << std::endl;
    ofs << "_- -   | | _- _" << std::endl;
    ofs << "  _ -  | |   -_" << std::endl;
    ofs << "      // \\\\" << std::endl;
    ofs << std::endl;
    ofs << "      // \\\\" << std::endl;
    ofs << " _- -   | | _- _" << std::endl;
    ofs << "  _ -  | |   -_" << std::endl;
    ofs << "   ~  \\\\ //  ~" << std::endl;
    ofs << " /~~         ~~\\" << std::endl;
    ofs << "{               }" << std::endl;
    ofs << " \\  _-     -_  /" << std::endl;
    ofs << "    \\~~   ~~/" << std::endl;
    ofs << "       -_-" << std::endl;
    ofs.close();
    return ;
}

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &rhs)
{
    o << rhs.getName() << " is ";
    if (rhs.getSigned())
        o << "signed";
    else
        o << "not signed";
    o << " and require grade " << rhs.getGradeToSign() << " to be signed and grade " << rhs.getGradeToExecute() << " to be executed.";
    return (o);
}


    
>>>>>>> refs/remotes/origin/main
