/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:20:24 by adihaj            #+#    #+#             */
/*   Updated: 2023/09/21 10:20:24 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
    private:
        std::string a_name;
        Weapon      &a_weapon;
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();

        void    attack();
        std::string getName(void);
        void setName(std::string name2set);
};


#endif