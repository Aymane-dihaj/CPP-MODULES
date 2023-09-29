/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:07:33 by adihaj            #+#    #+#             */
/*   Updated: 2023/09/28 17:52:02 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"
# include <math.h>

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

Fixed::Fixed(const int val)
{
    std::cout << "Int constructor called\n";
    this->value = val * (int)pow(2, fractbits);
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called\n";
    this->value = other.getRawBits();
}

Fixed::Fixed(const float val)
{
    std::cout << "Float constructor called\n";
    this->value = (int)roundf(val * pow(2, fractbits));
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
    return (value / (int)pow(2, fractbits));
}

float   Fixed::toFloat() const
{
    return ((float)this->value / powf(2, fractbits));
}