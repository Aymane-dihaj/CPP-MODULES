/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:22:04 by adihaj            #+#    #+#             */
/*   Updated: 2023/09/21 10:22:04 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "contact.hpp"

void    Contact::set_first_name(std::string _firstname)
{
    first_name = _firstname;
}

void    Contact::set_last_name(std::string _lastname)
{
    last_name = _lastname;
}

void    Contact::set_nick_name(std::string _nickname)
{
    nick_name = _nickname;
}

void    Contact::set_phone(std::string _phone)
{
    phone_number = _phone;
}

void    Contact::set_darkest_secret(std::string _darkest)
{
    darkest_secret = _darkest;
}

std::string     Contact::get_first_name()
{
    return(first_name);
}

std::string     Contact::get_last_name()
{
    return(last_name);
}

std::string     Contact::get_nick_name()
{
    return(nick_name);
}

std::string     Contact::get_phone_number()
{
    return(phone_number);
}

std::string     Contact::get_darkest_secret()
{
    return(darkest_secret);
}