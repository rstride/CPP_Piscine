/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:56:01 by rstride           #+#    #+#             */
/*   Updated: 2023/08/02 11:56:03 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac , char *av[])
{
	(void)av;
	if (ac != 2)
	{
		std::cerr << "File Not Open" << std::endl;
		return (EXIT_FAILURE);
	}
	Btc btc;

	btc.readInput(av[1]);
}