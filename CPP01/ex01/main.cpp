/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:21:02 by adihaj            #+#    #+#             */
/*   Updated: 2023/09/21 10:21:02 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main()
{
    int input = 0;
    Zombie *zom;
    std::string input_name;
	std::cout << "Enter number of Zombies in your horde: ";
    std::cin >> input;
    std::cin.ignore();
    if (std::cin.fail())
    {
        std::cout << "Wrong input!\n";
        return (1);
    }
    std::cout << "Enter tha name of yoour zombies: ";
    std::getline(std::cin, input_name);
    zom = zombieHorde(input, input_name);
    // don't forget to delete the allocated memory so the destructor called
    delete [] zom;
    return 0;
}