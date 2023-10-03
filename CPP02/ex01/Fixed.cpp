/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:07:33 by adihaj            #+#    #+#             */
/*   Updated: 2023/09/30 22:15:35 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"


Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    this->value = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

Fixed::Fixed(const int val)
{
    std::cout << "Int constructor called\n";
    this->value = val * 256;
}


Fixed::Fixed(const float val)
{
    std::cout << "Float constructor called\n";
    this->value = roundf(val * 256);
}
Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called\n";
    this->value = other.getRawBits();
}
int Fixed::getRawBits() const
{
    return (this->value);
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called\n";
    if (this == &other)
        return (*this);
    this->value = other.getRawBits();
    return (*this);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return (out);
}

void    Fixed::setRawBits(const int raw)
{
    this->value = raw;
}

int     Fixed::toInt() const
{
    return (value / 256);
}

float   Fixed::toFloat() const
{
    return ((float)this->value / 256);
}