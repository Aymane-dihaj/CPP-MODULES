/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:22:10 by adihaj            #+#    #+#             */
/*   Updated: 2023/09/21 10:22:10 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_number;
        std::string darkest_secret;
    public:
        Contact(){};
        ~Contact(){};

        void    set_first_name(std::string firstname);
        void    set_last_name(std::string lastname);
        void    set_nick_name(std::string nickname);
        void    set_phone(std::string phonenumber);
        void    set_darkest_secret(std::string darksecret);

        std::string get_first_name(void);
        std::string get_last_name(void);
        std::string get_nick_name(void);
        std::string get_phone_number(void);
        std::string get_darkest_secret(void);
};

#endif