/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:59:48 by rstride           #+#    #+#             */
/*   Updated: 2023/06/25 23:59:44 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct s_Data
{
	std::string data;
} Data;

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}


int main(void)
{
	Data test;

	test.data = "mjung";

	uintptr_t a;
	Data *b;

	a = serialize(&test);
	b = deserialize(a);

	std::cout << &test << std::endl;
	std::cout << b << std::endl;

	return (0);
}
