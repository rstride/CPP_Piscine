/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 15:56:41 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:45:33 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>
# include <limits>

# define MAX_CONTACTS 8

class Contact 
{
public:
    void input_contact();
    void print_contact() const;

    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
};

class PhoneBook 
{
public:
    PhoneBook();
    void add_contact();
    void search_contact() const;
    void execute_command(const std::string &command);

private:
    Contact contacts[8];
    int contact_count;
};

#endif