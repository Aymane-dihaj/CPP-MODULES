/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:50:39 by adihaj            #+#    #+#             */
/*   Updated: 2023/10/18 16:42:18 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string Name;
        int HitPoints;
        int Energy_points;
        int Attack_damage;
    
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();

        //copy
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);
        
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};


#endif