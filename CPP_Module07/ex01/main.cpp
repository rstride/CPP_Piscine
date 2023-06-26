/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 22:36:35 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:42:23 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int main(void)
{
	int array1[]={1,2,3,4,5};
	char array2[]={'a','b','c','d','e'};
	float array3[]={1.1,2.2,3.3,4.4,5.5};

	::iter(array1, 5, print);
	::iter(array2, 5, print);
	::iter(array3, 5, print);
}
