/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 15:37:30 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:45:16 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char** argv)
{
    int i = 1;
    int j;

    while (argv[i])
    {
        j = 0;
        while (argv[i][j])
        {
            std::cout << (char)std::toupper(argv[i][j]);
            j++;
        }
        i++;
    }
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << "\n";
    return (0);
}