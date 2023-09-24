/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:43:26 by adihaj            #+#    #+#             */
/*   Updated: 2023/09/21 12:23:50 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

void	Harl::debug( void )
{
	std::cout << "[DEBUG]\n";
	std::cout << "I love to get extra bacon for my "
			<< "7XL-double-cheese-triple-pickle-special-ketchup"
			<< " burger. I just love it!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[INFO]\n";
	std::cout << "I cannot believe adding extra bacon cost"
			<< " more money. You don’t put enough! "
			<< "If you did I would not have to ask for it!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[WARNING]\n";
	std::cout << "I think I deserve to have some extra bacon for free."
			<< " I’ve been coming here for years and you just started "
			<< "working here last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ERROR]\n";
	std::cout << "This is unacceptable, I want to speak "
			<< "to the manager now." << std::endl;
}

void	Harl::complain(std::string	level)
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    typedef void    (Harl:: *FunctionPTR)(void);
        FunctionPTR pointers[4];
        pointers[0] = &Harl::debug;
        pointers[1] = &Harl::info;
        pointers[2] = &Harl::warning;
        pointers[3] = &Harl::error;

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			switch (i)
			{
				case 0:
				{
					(this->*pointers[0])();
					(this->*pointers[1])();
					(this->*pointers[2])();
					(this->*pointers[3])();
					break ;
				}
				case 1:
				{
					(this->*pointers[1])();
					(this->*pointers[2])();
					(this->*pointers[3])();
					break ;
				}
				case 2:
				{
					(this->*pointers[2])();
					(this->*pointers[3])();
					break ;
				}
				case 3:
					(this->*pointers[3])();
					break ;
				
				default:
					break ;
			}
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]\n";
}