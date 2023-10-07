/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:07:33 by adihaj            #+#    #+#             */
/*   Updated: 2023/10/02 21:29:08 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed()
{
    this->value = 0;
}

Fixed::~Fixed() {}

Fixed::Fixed(const int val)
{
    this->value = val * 256;
}


Fixed::Fixed(const float val)
{
    this->value = (int)roundf(val * 256);
}
Fixed::Fixed(const Fixed& other)
{
    this->value = other.getRawBits();
}
int Fixed::getRawBits() const
{
    return (this->value);
}

Fixed& Fixed::operator=(const Fixed& other)
{
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

bool    Fixed::operator>(const Fixed& other) const
{
    return (this->getRawBits() > other.getRawBits());
}

bool    Fixed::operator<(const Fixed& other) const
{
    return (this->getRawBits() < other.getRawBits());
}

bool    Fixed::operator<=(const Fixed& other) const
{
    return (this->getRawBits() <= other.getRawBits());
}

bool    Fixed::operator>=(const Fixed& other) const
{
    return (this->getRawBits() >= other.getRawBits());
}

bool    Fixed::operator!=(const Fixed& other) const
{
    return (this->getRawBits() != other.getRawBits());
}

bool    Fixed::operator==(const Fixed& other) const
{
    return (this->getRawBits() == other.getRawBits());
}

Fixed   Fixed::operator+(const Fixed& other) const
{
    Fixed   result;
    
    result.setRawBits((this->getRawBits() + other.getRawBits()));
    return result;
}

Fixed   Fixed::operator-(const Fixed& other) const
{
    Fixed   result;

    result.setRawBits((this->getRawBits() - other.getRawBits()));
    return result;
}

Fixed   Fixed::operator*(const Fixed& other) const
{
    Fixed   result;

    result.setRawBits(((this->getRawBits() * other.getRawBits()) / 256));
    return result;
}

Fixed   Fixed::operator/(const Fixed& other) const
{
    Fixed result;
    
    result.setRawBits((this->getRawBits() / other.getRawBits()) * 256);
    return result;
}

//pre-increment
Fixed&  Fixed::operator++(void)
{
    this->setRawBits(this->getRawBits() + 1);
    return (*this);
}

Fixed&  Fixed::operator--(void)
{
    this->setRawBits(this->getRawBits() - 1);
    return (*this);
}

//post-increment
Fixed   Fixed::operator++(int)
{
    Fixed   original(*this);

    this->setRawBits(this->getRawBits() + 1);
    return (original);
}

Fixed   Fixed::operator--(int)
{
    Fixed original(*this);

    this->setRawBits(this->getRawBits() - 1);
    return original;
}

Fixed&  Fixed::min(Fixed& a, Fixed& b)
{
    if (a > b)
        return b;
    return (a);
}

Fixed&  Fixed::max(Fixed& a, Fixed& b)
{
    if (a > b)
        return a;
    return (b);
}

const Fixed&  Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a > b)
        return b;
    return (a);
}
const Fixed&  Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a > b)
        return a;
    return (b);
}

