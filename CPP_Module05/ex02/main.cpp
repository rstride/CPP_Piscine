/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2023/06/17 17:34:43 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:51:00 by rstride          ###   ########.fr       */
=======
/*   Created: 2023/04/30 19:13:28 by rstride           #+#    #+#             */
/*   Updated: 2023/06/20 20:09:43 by rstride          ###   ########.fr       */
>>>>>>> refs/remotes/origin/main
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
<<<<<<< HEAD
#include "RobotomyRequestForm.hpp"
#include "PresidentPardonForm.hpp"
=======
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
>>>>>>> refs/remotes/origin/main

int main()
{
<<<<<<< HEAD
	try
	{
		Bureaucrat human("oliver",149);
		ShrubberyCreationForm myTree("mjung");
		RobotomyRequestForm robotomy("tommy");
		PresidentPardonForm pardon("nice dog");

		std::cout << human << std::endl;

		std::cout << robotomy << std::endl;
		std::cout << myTree << std::endl;
		std::cout << pardon << std::endl;

		myTree.beSigned(human);
		robotomy.beSigned(human);
		pardon.beSigned(human);

		human.signForm(myTree);
		human.signForm(robotomy);
		human.signForm(pardon);

		myTree.execute(human);
		robotomy.execute(human);
		pardon.execute(human);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
=======
    std::cout << "---------------------" << std::endl;
    std::cout << "ShrubberyCreationForm" << std::endl;
    std::cout << "---------------------" << std::endl;
    try
    {
        Bureaucrat b1("B1", 1);
        Bureaucrat b2("B2", 150);
        ShrubberyCreationForm f1("f1");
        ShrubberyCreationForm f2("f2");
        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;
        f1.beSigned(b1);
        f2.beSigned(b2);
        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;
        b1.executeForm(f1);
        b2.executeForm(f2);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "---------------------" << std::endl;
    std::cout << "PresidentialPardonForm" << std::endl;
    std::cout << "---------------------" << std::endl;
    try
    {
        Bureaucrat b1("B1", 1);
        Bureaucrat b2("B2", 150);
        PresidentialPardonForm f1("f1");
        PresidentialPardonForm f2("f2");
        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;
        f1.beSigned(b1);
        f2.beSigned(b2);
        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;
        b1.executeForm(f1);
        b2.executeForm(f2);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "---------------------" << std::endl;
    std::cout << "RobotomyRequestForm" << std::endl;
    std::cout << "---------------------" << std::endl;
    try
    {
        Bureaucrat b1("B1", 1);
        Bureaucrat b2("B2", 150);
        RobotomyRequestForm f1("f1");
        RobotomyRequestForm f2("f2");
        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;
        f1.beSigned(b1);
        f2.beSigned(b2);
        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;
        b1.executeForm(f1);
        b2.executeForm(f2);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}

>>>>>>> refs/remotes/origin/main
