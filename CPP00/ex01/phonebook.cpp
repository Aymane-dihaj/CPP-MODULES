/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:22:16 by adihaj            #+#    #+#             */
/*   Updated: 2023/09/21 10:22:16 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"
# include "colors.hpp"

void    ft_welcome(void)
{
    std::cout << CYAN
              << "+----------------PHONEBOOK---------------+\n";
    std::cout << "|                1: ADD                  |\n";
    std::cout << "|                2: SEARCH               |\n";
    std::cout << "|                3: EXIT                 |\n";
    std::cout << "+----------------------------------------+\n"
              << RESET;
}

std::string resize(std::string str)
{
    if (str.length() > 10)
    {
        str.erase(str.begin() + 9, str.end());
        str.append(".");
    }
    return (str);
}

void    Phonebook::_print_contacts(void)
{
    std::cout << YELLOW << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|\n";
    for (int i = 0; i < index; i++)
    {
        std::cout
		<< "|" << std::setw(10) << i
		<< "|" << std::setw(10) << resize(contacts[i].get_first_name())
		<< "|" << std::setw(10) << resize(contacts[i].get_last_name())
		<< "|" << std::setw(10) << resize(contacts[i].get_nick_name()) << "|"
		<< std::endl;
    }
}

void    Phonebook::_search()
{
    unsigned int input_index = 0;

    _print_contacts();
    std::cout << PURPLE << "Enter index: ";
    std::cin >> input_index;
    if (std::cin.fail())
        std::cout << RED << "INVALID INDEX!\n";
    else
    {
        if ((int)input_index < index)
        {
            std::cout << BLUE << "First Name: " << RESET << GREEN << this->contacts[input_index].get_first_name() << std::endl << RESET;
            std::cout << BLUE << "Last Name: " << RESET << GREEN << this->contacts[input_index].get_last_name() << std::endl << RESET;
            std::cout << BLUE << "NickeName: " << RESET << GREEN << this->contacts[input_index].get_nick_name() << std::endl << RESET;
            std::cout << BLUE << "Phone Number: " << RESET << GREEN << this->contacts[input_index].get_phone_number() << std::endl << RESET;
            std::cout << BLUE << "Darkest Secret: " << RESET << GREEN << this->contacts[input_index].get_darkest_secret() << RESET << std::endl;
        }
        else
            std::cout << RED << "INVALID INDEX!\n" << RESET;
    }
    std::cin.clear();
    std::cin.ignore();
}

void    Phonebook::_add()
{
    Contact _contact;

    std::cout << PURPLE << "First name: " << RESET;
    std::getline(std::cin, _first_name);
    _contact.set_first_name(_first_name);
    std::cout << PURPLE << "last name: " << RESET;
    std::getline(std::cin, _last_name);
    _contact.set_last_name(_last_name);
    std::cout << PURPLE << "Nickname: " << RESET;
    std::getline(std::cin, _nick_name);
    _contact.set_nick_name(_nick_name);
    std::cout << PURPLE << "Phone number: " << RESET;
    std::getline(std::cin, _phone_number);
    _contact.set_phone(_phone_number);
    std::cout << PURPLE << "Darkest secret: " << RESET;
    std::getline(std::cin, _darkest_secret);
    _contact.set_darkest_secret(_darkest_secret);
    if (_first_name.empty() || _last_name.empty() || _nick_name.empty() || _phone_number.empty()
        || _darkest_secret.empty())
        std::cout << RED << "YOUR CONTACT CANNOT HAVE EMPTY FIELD!\n" << RESET;
    else
    {
        contacts[count % 8] = _contact;
        count++;
        if (count <= 8)
            index = count;
        std::cout << GREEN << "CONTACT ADDED SUCCESSFULY\n" << RESET;
    }
}

int main()
{
    Phonebook phone_book;
    std::string input;
    
    ft_welcome();
    while (1)
    {
        std::cout << BLUE << "-> " << RESET;
        std::getline(std::cin, input);
        if (input == "ADD")
            phone_book._add();
        else if (input == "SEARCH")
            phone_book._search();
        else if (input == "EXIT")
        {
            std::cout << RED << "Exit\n" << RESET;
            break ;
        }
        else
            std::cout << RED << "COMMAND NOT FOUND!\n" << RESET;
    }
    return (0);
}