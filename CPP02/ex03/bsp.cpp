/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:58:59 by adihaj            #+#    #+#             */
/*   Updated: 2023/10/05 21:37:48 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Fixed.hpp"
# include "Point.hpp"

// Function to calculate the area of an triangle
float   getAreaoftringle(const Point& a, const Point& b, const Point& c)
{
    return (abs((a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat())
    + b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat())
    + c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat()))) / 2.0);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    // calculate the area of the triangle ABC
    float A = getAreaoftringle(a, b, c);

    // calculate the area of the triangle PBC
    float A1 = getAreaoftringle(point, b, c);

    // calculate the area of the triangle PAC
    float A2 = getAreaoftringle(point, a, c);

    // calculate the area of the triangle PAB
    float A3 = getAreaoftringle(point, a, b);

    return (A == A1 + A2 + A3);
}

