/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:22:20 by adihaj            #+#    #+#             */
/*   Updated: 2023/09/21 10:22:20 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "contact.hpp"
# include <iomanip>
# include <climits>

class Phonebook
{
    private:
        Contact contacts[8];
        int count;
        int index;
        std::string _first_name;
        std::string _last_name;
        std::string _nick_name;
        std::string _phone_number;
        std::string _darkest_secret;
    public:
        Phonebook()
        {
            count = 0;
            index = 0;
        };
        ~Phonebook(){};
        void    _add(void);
        void    _search(void);
        void    _print_contacts(void);
};

#endif