/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:40:38 by adihaj            #+#    #+#             */
/*   Updated: 2023/10/28 15:15:01 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int main(void)
{
	ScavTrap player1("carl");
	ScavTrap player2("lilpati");

	std::cout << "*************************************\n";

	std::cout << std::endl;

	player1.attack("lilpati");
	player1.takeDamage(20);
	player1.beRepaired(10);
	player1.guardGate();

	player2.attack("carl");
	player2.takeDamage(200);
	player2.beRepaired(10);
	player2.attack("carl");

	std::cout << std::endl;

	std::cout << "************************************\n";
	return 0;
}
