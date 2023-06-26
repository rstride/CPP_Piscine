/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:38:41 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:47:59 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <iostream>
#include <map>
#include <string>


class Harl{
	typedef struct status
	{
		std::string name;
		void(Harl::*ptr)(void);
	}	t_status;
public:
	void complain(std::string _level);
	Harl(void);
	void etc(void);

private:
	t_status stat[4];
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	void init(void);
};

#endif