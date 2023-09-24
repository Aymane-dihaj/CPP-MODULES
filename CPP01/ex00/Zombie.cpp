/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:21:28 by adihaj            #+#    #+#             */
/*   Updated: 2023/09/21 10:21:28 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void    Zombie::announce()
{
    std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_name(std::string name_to_set)
{
    name = name_to_set;
}

Zombie::Zombie()
{
    std::cout << "Constructor called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << name << " has destructed" << std::endl;
}
