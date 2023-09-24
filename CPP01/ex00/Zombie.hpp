/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:21:33 by adihaj            #+#    #+#             */
/*   Updated: 2023/09/21 10:21:33 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H


# include <iostream>
# include <string>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void    announce(void);
        void    set_name(std::string name_to_set);
};

Zombie* newZombie( std::string name );
void    randomChump(std::string name);

#endif