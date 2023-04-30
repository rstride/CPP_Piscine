/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 15:56:38 by rstride           #+#    #+#             */
/*   Updated: 2023/04/30 17:56:07 by rstride          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "phonebook.hpp"

void Contact::input_contact() 
{
    std::cout << "First name: ";
    std::getline(std::cin, first_name);
    std::cout << "Last name: ";
    std::getline(std::cin, last_name);
    std::cout << "Nickname: ";
    std::getline(std::cin, nickname);
    std::cout << "Phone number: ";
    std::getline(std::cin, phone_number);
    std::cout << "Darkest secret: ";
    std::getline(std::cin, darkest_secret);
}

void Contact::print_contact() const 
{
    std::cout << "First name: " << first_name << std::endl;
    std::cout << "Last name: " << last_name << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone number: " << phone_number << std::endl;
    std::cout << "Darkest secret: " << darkest_secret << std::endl;
}

PhoneBook::PhoneBook() : contact_count(0) {
}

void PhoneBook::add_contact() 
{
    if (contact_count < 8) 
    {
        contacts[contact_count].input_contact();
        contact_count++;
    } 
    else 
    {
        for (int i = 0; i < 7; i++)
            contacts[i] = contacts[i + 1];
        contacts[7].input_contact();
    }
}

void PhoneBook::search_contact() const 
{
    for (int i = 0; i < contact_count; i++) 
    {
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << contacts[i].first_name.substr(0, 9) << "|";
        std::cout << std::setw(10) << contacts[i].last_name.substr(0, 9) << "|";
        std::cout << std::setw(10) << contacts[i].nickname.substr(0, 9) << std::endl;
    }

    int index;
    std::cout << "Enter the index of the contact: ";
    
    if (std::cin >> index) 
    {
        std::cin.ignore();
        if (index >= 0 && index < contact_count && index < 8)
        {
            contacts[index].print_contact();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else
        {
            std::cout << "Invalid index" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    else
    {
        std::cout << "Invalid input" << std::endl;
        std::cin.clear(); 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    
}

void PhoneBook::execute_command(const std::string &command) 
{
    if (command == "ADD") 
        add_contact();
    else if (command == "SEARCH") 
        search_contact();
    else if (command == "EXIT")
        exit(0);
    else
        std::cout << "Invalid command" << std::endl;
}

int main(void) 
{
    PhoneBook phonebook;
    std::string command;

    while (true) 
    {
        std::cout << "Enter a command: (ADD, SEARCH, EXIT)" << std::endl;
        std::getline(std::cin, command);
        phonebook.execute_command(command);
    }
    return (0);
}