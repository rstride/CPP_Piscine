/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:03:26 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:46:34 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
		return (NULL);
		
	Zombie *zombie_horde = new Zombie[N];

	for (int i=0; i<N; i++)
	{
		zombie_horde[i].set_name(name);
	}
	return (zombie_horde);
}