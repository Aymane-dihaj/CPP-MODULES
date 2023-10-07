/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:47:56 by adihaj            #+#    #+#             */
/*   Updated: 2023/10/05 21:27:25 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point();
        Point(const float a, const float b);
        Point(const Point& other);
        ~Point();

        Point& operator=(const Point& other);
        const Fixed& getX() const;
        const Fixed& getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif