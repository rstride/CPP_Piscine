/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:02:06 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:46:38 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	char text[] = "HI THIS IS BRAIN";
	std::string str = "HI THIS IS BRAIN";

	char *stringPTR = text;
	std::string& stringREF = str;

	std::cout << "text address : " << text << std::endl;
	std::cout << "stringPTR address : " << stringPTR << std::endl;
	std::cout << "stringREF address : " << stringREF << std::endl;

	std::cout << "using stringPTR : " << stringPTR << std::endl;
	std::cout << "using stringREF : " << stringREF << std::endl;

	return (0);
}