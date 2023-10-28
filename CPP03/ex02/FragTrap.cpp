/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:58:53 by adihaj            #+#    #+#             */
/*   Updated: 2023/10/10 17:27:25 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default constructor called\n";
    this->Name = "unkonnu";
    this->Attack_damage = 30;
    this->Energy_points = 100;
    this->HitPoints = 100;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap parametrized constructor called\n";
    this->Name = name;
    this->Attack_damage = 30;
    this->Energy_points = 100;
    this->HitPoints = 100;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called\n";
}

FragTrap::FragTrap(const FragTrap& other)
{
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this == &other)
        return *this;
    this->Attack_damage = other.Attack_damage;
    this->Energy_points = other.Energy_points;
    this->Name = other.Name;
    this->HitPoints = other.HitPoints;
    return *this;
}

void    FragTrap::highFivesGuys()
{
    if (this->HitPoints > 0)
        std::cout << "FragTrap " << this->Name << " said highFive\n";
    else
        std::cout << "FragTrap" << this->Name << " is dead\n";
}