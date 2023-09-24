/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:22:38 by adihaj            #+#    #+#             */
/*   Updated: 2023/09/21 10:22:38 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

void	Harl::debug( void )
{
	std::cout << "I love to get extra bacon for my "
			<< "7XL-double-cheese-triple-pickle-special-ketchup"
			<< " burger. I just love it!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost"
			<< " more money. You don’t put enough! "
			<< "If you did I would not have to ask for it!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free."
			<< " I’ve been coming here for years and you just started "
			<< "working here last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable, I want to speak "
			<< "to the manager now." << std::endl;
}

void    Harl::complain (std::string level)
{
    std::string moods[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    typedef void    (Harl:: *FunctionPTR)(void);
        FunctionPTR pointers[4];
        pointers[0] = &Harl::debug;
        pointers[1] = &Harl::info;
        pointers[2] = &Harl::warning;
        pointers[3] = &Harl::error;

        for (int i = 0; i < 4; i++)
        {
            if (moods[i] == level)
            {
                (this->*pointers[i])();
                return ;
            }
        }
}