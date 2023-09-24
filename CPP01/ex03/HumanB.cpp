/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:20:32 by adihaj            #+#    #+#             */
/*   Updated: 2023/09/21 10:20:32 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

void    HumanB::attack()
{
    std::cout << b_name << " attacks with their " << b_weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name): b_name(name), b_weapon(NULL){}

HumanB::~HumanB()
{
    std::cout << "HumanB called Destructor\n";
}

std::string HumanB::getName()
{
    return (b_name);
}

void    HumanB::setName(std::string name2set)
{
    b_name = name2set;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    b_weapon = &weapon;
}
