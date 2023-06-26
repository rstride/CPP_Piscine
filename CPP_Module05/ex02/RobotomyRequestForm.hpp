/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2023/06/17 17:34:58 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:41:07 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <iostream>
#include <random>

class Bureaucrat;

class RobotomyRequestForm: public Form
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string _target);
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &RobotomyRequestForm);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &RobotomyRequestForm);

	void execute(Bureaucrat const &executor);

private:
	void Robotization();

};

#endif
=======
/*   Created: 2023/06/20 20:00:13 by rstride           #+#    #+#             */
/*   Updated: 2023/06/20 20:04:36 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include <fstream>

class RobotomyRequestForm : public Form
{
    private:
        std::string _target;
        RobotomyRequestForm();
        
    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &src);
        virtual ~RobotomyRequestForm();

        RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);

        virtual void execute(Bureaucrat const &executor) const;
};

std::ostream &operator<<(std::ostream &o, RobotomyRequestForm const &rhs);

    
>>>>>>> refs/remotes/origin/main
