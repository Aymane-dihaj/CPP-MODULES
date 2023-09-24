/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:20:37 by adihaj            #+#    #+#             */
/*   Updated: 2023/09/21 10:20:37 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
    private:
        std::string b_name;
        Weapon     *b_weapon;
    public:
        HumanB(std::string name);
        ~HumanB();

        void    attack();
        std::string getName(void);
        void setName(std::string name2set);
        void    setWeapon(Weapon &weapon);
};


#endif