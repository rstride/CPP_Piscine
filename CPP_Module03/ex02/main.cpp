/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:13:28 by rstride           #+#    #+#             */
/*   Updated: 2023/06/06 09:28:04 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// hitPoint_ = 100;
// energyPoint_ = 100;
// attackDamage_ = 30;

int main(void)
{
	FragTrap st("Slime");
	
	st.attack("strong rabbit");
	st.takeDamage(80);
	st.beRepaired(30);

	st.highFivesGuys();
	return (0);
}