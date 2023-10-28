/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 21:02:09 by adihaj            #+#    #+#             */
/*   Updated: 2023/10/19 16:12:10 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
    #define DIAMONDTRAP_HPP
    #include "FragTrap.hpp"
    # include "ScavTrap.hpp"

    class DiamondTrap: public FragTrap, public ScavTrap {
        private:
            std::string Name;
        public:
            // Constructors and destructors and operators
            DiamondTrap();
            DiamondTrap(std::string name);
            DiamondTrap( DiamondTrap const & src );
            ~DiamondTrap();
            DiamondTrap & operator=( DiamondTrap const & other );
            
            // methods
            void attack(const std::string &target);
            void whoAmI();
    };



#endif