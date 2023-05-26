/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:00:08 by rstride           #+#    #+#             */
/*   Updated: 2023/05/26 16:00:09 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
 *  < 목표 >
 *  - 좀비 생성
 *  - 좀비 이름 설정
 *  - 코드의 다른 위치에서 사용하도록 반환
 */

Zombie* newZombie(std::string name)
{
	Zombie *new_one;
	
	new_one = new Zombie(name);
	return new_one;
}
