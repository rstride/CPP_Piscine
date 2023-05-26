/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:00:11 by rstride           #+#    #+#             */
/*   Updated: 2023/05/26 16:00:12 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// 좀비를 생성하고 스스로 알리게 하는 함수
void randomChump(std::string name)
{
	Zombie *new_one;
	
	new_one = newZombie(name);
	new_one->announce();
	delete new_one;
}