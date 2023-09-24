/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:38:09 by adihaj            #+#    #+#             */
/*   Updated: 2023/09/23 12:57:10 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "constructor called\n";
    value = 0;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called\n";
    this->value = other.value;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "copy assignment operator called\n";
    if (&other != this)
        return *this;
    this->value = other.value;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called\n";
    return (this->value);
}

void    Fixed::setRawBits(const int raw)
{
    this->value = raw;
}