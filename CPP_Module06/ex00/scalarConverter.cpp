/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 02:22:06 by rstride           #+#    #+#             */
/*   Updated: 2023/07/04 18:19:36 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalarConverter.hpp"

scalarConverter::scalarConverter()
{
}

scalarConverter::scalarConverter(char* _input)
{
	cInput_ = _input;
	sInput_ = static_cast<std::string>(_input);

	try {
		value_ = std::stod(_input);
	}
	catch(...)
	{
		isImpossible_ = true;
	}
}

scalarConverter::~scalarConverter()
{
}

scalarConverter::scalarConverter(const scalarConverter &_target)
{
	cInput_ = _target.cInput_;
	sInput_ = _target.sInput_;
	value_ = _target.value_;
	isImpossible_ = _target.isImpossible_;
}

scalarConverter &scalarConverter::operator=(const scalarConverter &_target)
{
	cInput_ = _target.cInput_;
	sInput_ = _target.sInput_;
	value_ = _target.value_;
	isImpossible_ = _target.isImpossible_;

	return (*this);
}


void scalarConverter::toChar()
{
	std::cout << "char: ";
	if (isImpossible_ || isnan(value_))
		std::cout << "impossible";
	else if (isprint(value_) == false)
		std::cout << "Non displayable";
	else
		std::cout << static_cast<char>(value_);
	std::cout << std::endl;
}

void scalarConverter::toInt()
{
	std::cout << "int: ";
	if (isImpossible_ || isnan(value_) || value_ > INT_MAX)
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(value_);
	std::cout << std::endl;
}

void scalarConverter::toFloat()
{
	std::cout << "float: ";
	if (isImpossible_ || isnan(value_) || value_ > FLT_MAX)
		std::cout << "nanf";
	else
		std::cout << static_cast<float>(value_) << 'f';
	std::cout << std::endl;
}

void scalarConverter::toDouble()
{
	std::cout << "double: ";
	if (isImpossible_ || isnan(value_))
		std::cout << "nan";
	else
		std::cout << static_cast<double>(value_);
	std::cout << std::endl;
}

