/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:40:38 by adihaj            #+#    #+#             */
/*   Updated: 2023/10/09 17:41:49 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Jubileus("Jubileus");
	ClapTrap Robert("Robert");

	std::cout << std::endl;

	Jubileus.attack("Robert");
	Robert.takeDamage(5);

	std::cout << std::endl;

	Jubileus.attack("Robert");
	Robert.takeDamage(1);

	std::cout << std::endl;

	Jubileus.attack("Robert");
	Robert.takeDamage(1);

	std::cout << std::endl;

	Robert.beRepaired(7);

	std::cout << std::endl;

	Jubileus.attack("Robert");
	Robert.takeDamage(10);

	std::cout << std::endl;

	return 0;
}
