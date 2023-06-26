/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:21:47 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:01:43 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	// OCCP
public:
	Brain();
	virtual ~Brain();
	Brain(const Brain &target);
	Brain& operator=(const Brain &target);

	std::string ideas[100];
};

#endif