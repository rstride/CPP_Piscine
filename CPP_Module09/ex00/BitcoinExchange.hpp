/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:55:39 by rstride           #+#    #+#             */
/*   Updated: 2023/08/02 11:55:41 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <vector>
#include <cctype>

class Btc
{
private:
	std::map <std::string, float> data;
	int readFlag;
public:
	Btc();
	~Btc();
	Btc& operator=(Btc const &var);
	Btc(Btc const &var);

	void setData(std::string date, float value);

	void readInput(std::string inputPath);

	std::map<std::string, float> getData();
	std::vector<std::string> splitString(std::string str, char delimiter);
};