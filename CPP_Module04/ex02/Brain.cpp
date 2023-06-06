/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:21:39 by rstride           #+#    #+#             */
/*   Updated: 2023/06/06 10:24:48 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor" << std::endl;
};

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}

Brain::Brain(const Brain &target)
{
}

Brain& Brain::operator= (const Brain &target) {
	return (*this);
}