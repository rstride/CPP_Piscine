/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:00:52 by rstride           #+#    #+#             */
/*   Updated: 2023/05/26 16:03:13 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << "<" << name_ << "> " << "BraiiiiiiinnnzzzZ" << std::endl;
}

void Zombie::set_name(std::string _name)
{
	name_ = _name;
}

Zombie::~Zombie(void)
{
	std::cout << "[" << name_ << "] " << "die." << std::endl;
}