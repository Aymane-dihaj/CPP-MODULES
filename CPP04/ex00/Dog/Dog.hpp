/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:22:03 by adihaj            #+#    #+#             */
/*   Updated: 2023/10/27 21:30:12 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "../Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(std::string type);
        ~Dog();
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        
        void makeSound() const;
    
};

#endif