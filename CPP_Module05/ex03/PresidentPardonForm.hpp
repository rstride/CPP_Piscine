/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentPardonForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:34:55 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:39:11 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTPARDONFORM_HPP
#define PRESIDENTPARDONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>

class Bureaucrat;

class PresidentPardonForm: public virtual Form
{
public:
	PresidentPardonForm();
	PresidentPardonForm(std::string _target);
	virtual ~PresidentPardonForm();
	PresidentPardonForm(const PresidentPardonForm &PresidentPardonForm);
	PresidentPardonForm &operator=(const PresidentPardonForm &PresidentPardonForm);

	void execute(Bureaucrat const &executor);

private:
	void pardon();
};

#endif
