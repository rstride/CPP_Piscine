/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:13:28 by rstride           #+#    #+#             */
/*   Updated: 2023/06/20 20:09:43 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
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

