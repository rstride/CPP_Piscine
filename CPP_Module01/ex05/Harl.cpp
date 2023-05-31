/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:35:40 by rstride           #+#    #+#             */
/*   Updated: 2023/05/31 12:36:59 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(std::string _level)
{
	for (int i = 0; i < 4 ; i++)
	{
		if (stat[i].name == _level)
		{
			(this->*(stat[i].ptr))();
		}
	}
}

Harl::Harl(void)
{
	init();
}

void Harl::init(void)
{
	stat[0].name = "debug";
	stat[0].ptr = &Harl::debug;
	stat[1].name = "info";
	stat[1].ptr = &Harl::info;
	stat[2].name = "warning";
	stat[2].ptr = &Harl::warning;
	stat[3].name = "error";
	stat[3].ptr = &Harl::error;
}

void Harl::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;

}