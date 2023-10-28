/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:40:38 by adihaj            #+#    #+#             */
/*   Updated: 2023/10/10 17:21:22 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

int main()
{

	std::cout << "\n*****************************\n\n";

	FragTrap *fragtrap1 = new FragTrap("fragtrap1");

	fragtrap1->attack("fragtrap2");
	fragtrap1->beRepaired(20);
    fragtrap1->takeDamage(30);
	fragtrap1->highFivesGuys();

    delete fragtrap1;
    
	std::cout << "\n*****************************\n";
	return 0;
}
