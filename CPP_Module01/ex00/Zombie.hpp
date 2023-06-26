/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:00:17 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:46:19 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	public:
		void announce(void);

		Zombie(std::string _name);
		~Zombie(void);

	private:
		std::string name_;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif