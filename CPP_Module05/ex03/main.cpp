/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:50:47 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:39:36 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"
#include "Intern.hpp"

int main(void)
{
	try
	{
		Intern intern1;
		Form *rtn;

		rtn = intern1.makeForm("RobotomyRequestForm", "rstride");
//		rtn = intern1.makeForm("wrongForm", "rstride");
		std::cout << rtn->getFormName() << std::endl;
		std::cout << rtn->getTarget() << std::endl;

		std::cout << *rtn << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}




	return (0);
}
