/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:01:06 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:46:32 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <sstream> //std::stringstream

class Zombie
{
	public:
		void announce(void);
		void set_name(std::string _name);

		~Zombie(void);

	private:
		std::string name_;
};

Zombie* zombieHorde( int N, std::string name );

#endif