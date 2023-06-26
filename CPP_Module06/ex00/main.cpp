/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 02:22:31 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:41:27 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>
#include "scalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "The number of argument values is not correct." << std::endl;
		return(1);
	}

	std::cout << std::fixed;
	std::cout.precision(1);

	char *target = argv[1];
	scalarConverter convert(target);

	convert.toChar();
	convert.toInt();
	convert.toFloat();
	convert.toDouble();
	
	return (0);
}
