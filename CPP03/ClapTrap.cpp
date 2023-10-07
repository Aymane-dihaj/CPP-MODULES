/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:50:30 by adihaj            #+#    #+#             */
/*   Updated: 2023/10/07 17:35:46 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called\n";
    this->Name = "unkonnu";
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Constructor called\n";
    this->Name = name;
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->HitPoints > 0 || this->Energy_points > 0)
    {
        this->Energy_points--;
        std::cout << "ClapTrap " << Name << " attacks " << target
        << "Causing " << Attack_damage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap can't do anythin:(\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called\n";
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->HitPoints > 0 && this->Attack_damage > 0)
    {
        this->HitPoints -= amount;
        std::cout << "ClapTrap " << this->Name << " take " << amount << " of damage\n";
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (Energy_points > 0)
    {
        std::cout << "ClapTrap " << this->Name << " Repaired by " << amount << std::endl;
        this->Energy_points -= 1;
        
    }
}