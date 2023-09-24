/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:21:13 by adihaj            #+#    #+#             */
/*   Updated: 2023/09/21 10:21:13 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *new_zombie;

    new_zombie = new Zombie[N];
    for(int i = 0; i < N; i++)
    {
        new_zombie[i].set_name(name);
        new_zombie[i].announce();
    }
    return (new_zombie);
}