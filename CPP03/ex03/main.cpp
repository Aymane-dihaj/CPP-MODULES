/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:40:38 by adihaj            #+#    #+#             */
/*   Updated: 2023/10/19 16:13:16 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

int main()
{

	std::cout << "\n*****************************\n\n";

	DiamondTrap *DiamondTrap1 = new DiamondTrap("DiamondTrap1");

	DiamondTrap1->attack("DiamondTrap2");
	DiamondTrap1->beRepaired(20);
    DiamondTrap1->takeDamage(30);
	DiamondTrap1->highFivesGuys();

    delete DiamondTrap1;
    
	std::cout << "\n*****************************\n";
	return 0;
}
