/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:20:17 by adihaj            #+#    #+#             */
/*   Updated: 2023/09/21 10:20:17 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void    HumanA::attack()
{
    std::cout << a_name << " attacks with their " << a_weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon): a_name(name), a_weapon(weapon){}

HumanA::~HumanA()
{
    std::cout << "HumanA called Destructor\n";
}

std::string HumanA::getName()
{
    return (a_name);
}

void    HumanA::setName(std::string name2set)
{
    a_name = name2set;
}