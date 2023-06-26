/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 02:22:24 by rstride           #+#    #+#             */
/*   Updated: 2023/06/25 23:59:44 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cmath>
#include <limits>
#include <cfloat>

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


#endif
