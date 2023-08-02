/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:56:39 by rstride           #+#    #+#             */
/*   Updated: 2023/08/02 11:56:41 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

class RPN
{
private:
	std::stack<double> numbers;
public:
	RPN();
	RPN(std::stack<double> number);
	RPN(const RPN &var);
	~RPN();
	RPN &operator=(const RPN &var);
	void calculate(std::string input);
		
};
