/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:03:57 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:46:23 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *horde;
	int count = 3;
	
	horde = zombieHorde(count, "monster");
	for(int i=0; i<count; i++)
	{
		horde->announce();
	}
	delete[] horde;

	return (0);
}