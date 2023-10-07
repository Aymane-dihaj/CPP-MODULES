/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:56:01 by adihaj            #+#    #+#             */
/*   Updated: 2023/10/05 21:45:50 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float a, const float b) : x(a), y(b) {}

Point::Point(const Point& other) : x(other.getX()), y(other.getY()) {}


Point& Point::operator=(const Point& other)
{
    (void)other;
    return *this;
}

const Fixed& Point::getX() const
{
    return (this->x);
}

const Fixed &Point::getY() const
{
    return (this->y);
}

Point::~Point() {}



