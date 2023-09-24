/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:21:24 by adihaj            #+#    #+#             */
/*   Updated: 2023/09/21 10:21:24 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie *new_zom;

    new_zom = newZombie(name);
    new_zom->announce();
    delete new_zom;
}