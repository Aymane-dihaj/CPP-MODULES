/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:42:42 by adihaj            #+#    #+#             */
/*   Updated: 2023/10/09 21:35:13 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap Constructor called\n";
    this->Name = name;
    this->HitPoints = 100;
    this->Energy_points = 50;
    Attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called\n";
}

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default constructor called\n";
    this->Name = "unkonnu";
    this->HitPoints = 100;
    this->Energy_points = 50;
    Attack_damage = 20;   
}

void    ScavTrap::attack(const std::string& target)
{
	if (this->Energy_points == 0)
	{
		std::cout << "ScavTrap is out of energy points!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->Name 
	     << " attacks " << target 
		 << " causing " << this->Attack_damage 
		 << " points of damage!" << std::endl;
	this->Energy_points -= 1;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	std::cout << "ScavTrap Copy constructor called\n";
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "ScavTrap copy assignment operator called\n";
	if (this == &other)
		return *this;
	this->Name = other.Name;
	this->Attack_damage = other.Attack_damage;
	this->Energy_points = other.Energy_points;
	this->HitPoints = other.HitPoints;
	return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->Name << " is guarding the gate\n";
}
