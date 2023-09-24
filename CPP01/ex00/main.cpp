/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:21:18 by adihaj            #+#    #+#             */
/*   Updated: 2023/09/21 10:21:18 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"


int main()
{
    int number = 0;

    std::cout << "Enter the number of zombies: ";
    std::cin >> number;
    std::cin.ignore();
    if (std::cin.fail())
        std::cout << "Wrong input!\n";
    std::string names[number];
    for (int i = 0; i < number; i++)
    {
        std::cout << "Assign names for your zombies " << i + 1 << '/' << number << ": ";
        std::getline(std::cin, names[i]);
    }
    std::cout << "================================\n";
    randomChump(names[rand() % number]);
    return (0);
}