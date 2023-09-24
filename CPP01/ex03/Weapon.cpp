/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:20:47 by adihaj            #+#    #+#             */
/*   Updated: 2023/09/21 10:20:47 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(std::string _type)
{
    type = _type;
}

Weapon::~Weapon()
{
    std::cout << "Weapon Destructor\n";
}

void    Weapon::setType(std::string _type)
{
    type = _type;
}

std::string const  &Weapon::getType(void)
{
    return (type);
}