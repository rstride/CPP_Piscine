/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:38:22 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:47:56 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(std::string _level)
{
	bool check_level = false;

	for (int i = 0; i < 4 ; i++)
	{
		if (check_level || stat[i].name == _level)
		{
			(this->*(stat[i].ptr))();
			check_level = true;
		}
	}
	if (check_level == false)
		etc();

}

Harl::Harl(void)
{
	init();
}

void Harl::init(void)
{
	stat[0].name = "DEBUG";
	stat[0].ptr = &Harl::debug;
	stat[1].name = "INFO";
	stat[1].ptr = &Harl::info;
	stat[2].name = "WARNING";
	stat[2].ptr = &Harl::warning;
	stat[3].name = "ERROR";
	stat[3].ptr = &Harl::error;
}

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;;
}

void Harl::etc(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}