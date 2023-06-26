/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 03:49:09 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:01:10 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <exception>
#include <random>

int main()
{
	try {
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

//	try {
//
//
//		// size over
//		{
//			Span sp = Span(1);
//			sp.addNumber(1);
//			sp.addNumber(2);
//		}
//
//
//		// no range
//		{
//			Span sp = Span(10);
//			sp.addNumber(1);
//
//			std::cout << sp.shortestSpan() << std::endl;
//			std::cout << sp.longestSpan() << std::endl;
//		}
//	}
//	catch (std::exception & e)
//	{
//		std::cerr << e.what() << std::endl;
//	}

//	{
//		std::random_device rd;
//		std::mt19937 gen(rd());
//		std::uniform_int_distribution<int> dis(0, 10000);
//
//
//		Span sp = Span(100000);
//		try {
//			for (int i = 0; i < 10000; i++) {
//				int randomNumber = dis(gen);
//				std::cout << "number add : " << randomNumber << std::endl;
//				sp.addNumber(randomNumber);
//			}
//		}
//		catch (std::exception &e) {
//			std::cerr << e.what() << std::endl;
//		}
//		std::cout << sp.shortestSpan() << std::endl;
//		std::cout << sp.longestSpan() << std::endl;
//	}
}
