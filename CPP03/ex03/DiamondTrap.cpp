/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:39:38 by adihaj            #+#    #+#             */
/*   Updated: 2023/10/19 16:10:41 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap() {
    ClapTrap::Name = "Unknown_clap_name";
    this->Name = "unknown";
    this->HitPoints = 100;
    this->Energy_points = 50;
    this->Attack_damage = 30;
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) {
    this->Name = name;
    ClapTrap::Name = (name + "_clap_name");
    this->HitPoints = 100;
    this->Energy_points = 50;
    this->Attack_damage = 30;
    std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src ) {
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = src;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap const & other ) {
    std::cout << "DiamondTrap assignation operator called" << std::endl;
    this->Name = other.Name;
    ClapTrap::Name = other.ClapTrap::Name;
    this->HitPoints = other.HitPoints;
    this->Energy_points = other.Energy_points;
    this->Attack_damage = other.Attack_damage;
    return *this;
}

void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << this->Name << std::endl;
    std::cout << this->ClapTrap::Name << std::endl;
}