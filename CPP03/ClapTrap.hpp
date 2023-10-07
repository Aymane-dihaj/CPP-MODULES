/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:50:39 by adihaj            #+#    #+#             */
/*   Updated: 2023/10/06 19:09:11 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string Name;
        int HitPoints = 10;
        int Energy_points = 10;
        int Attack_damage = 0;
    
    public:
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};


#endif