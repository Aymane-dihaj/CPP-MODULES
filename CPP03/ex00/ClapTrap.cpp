/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:50:30 by adihaj            #+#    #+#             */
/*   Updated: 2023/10/18 16:45:09 by adihaj           ###   ########.fr       */
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
    this->HitPoints = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	// b = a
	std::cout << "ClapTrap Copy constructor called\n";
	this->Name = other.Name;
	this->Attack_damage = other.Attack_damage;
	this->Energy_points = other.Energy_points;
	this->HitPoints = other.HitPoints;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "ClapTrap copy assignment operator called\n";
	if (this == &other)
		return *this;
	this->Name = other.Name;
	this->Attack_damage = other.Attack_damage;
	this->Energy_points = other.Energy_points;
	this->HitPoints = other.HitPoints;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->Energy_points == 0)
	{
		std::cout << "ClapTrap is out of energy points!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->Name 
	     << " attacks " << target 
		 << " causing " << this->Attack_damage 
		 << " points of damage!" << std::endl;
	this->Energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->HitPoints || this->HitPoints == 0)
	{
		std::cout << "ClapTrap " << this->Name << " died" << std::endl;
		this->HitPoints = 0;
		return;
	}
	this->HitPoints -= amount;
	std::cout << "ClapTrap " << this->Name
		 << " took " << amount << " points of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Energy_points == 0)
	{
		std::cout << "ClapTrap is out of energy points!" << std::endl;
		return ;
	}
	this->HitPoints += amount;
	this->Energy_points -= 1;
	std::cout << "ClapTrap " << this->Name
		 << " has been repaired and gained "
		 << amount << " hit points" << std::endl;
}
