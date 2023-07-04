/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 02:22:24 by rstride           #+#    #+#             */
/*   Updated: 2023/07/04 18:19:43 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cmath>
#include <limits>
#include <cfloat>
#include <climits>
#include <math.h>

class scalarConverter
{

public:
	scalarConverter();
	scalarConverter(char* _input);
	virtual ~ scalarConverter();
	scalarConverter(const scalarConverter &_target);
	scalarConverter &operator=(const scalarConverter &_target);

	void toChar();
	void toInt();
	void toFloat();
	void toDouble();

private:

	char *cInput_;
	std::string sInput_;
	double value_;
	bool isImpossible_;
};