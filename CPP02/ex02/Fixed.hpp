/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:18:12 by adihaj            #+#    #+#             */
/*   Updated: 2023/09/30 22:15:42 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP


# include <iostream>
# include <math.h>

class Fixed
{
    private:
        int value;
        static const int fractbits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const int val);
        Fixed(const float val);
        Fixed& operator=(const Fixed& other);
        Fixed(const Fixed& other);

        int getRawBits(void) const;
        void setRawBits(const int raw);
        float   toFloat(void) const;
        int     toInt(void) const;
        
        //comparaison operators
        bool    operator>(const Fixed& other) const;
        bool    operator<(const Fixed& other) const;
        bool    operator>=(const Fixed& other) const;
        bool    operator<=(const Fixed& other) const;
        bool    operator==(const Fixed& other) const;
        bool    operator!=(const Fixed& other) const;

        //arithmetic operators
        Fixed   operator+(const Fixed& other) const;
        Fixed   operator*(const Fixed& other) const;
        Fixed   operator/(const Fixed& other) const;
        Fixed   operator-(const Fixed& other) const;

        // increment/decrement operators
        Fixed&  operator++(void);
        Fixed   operator++(int);
        Fixed&  operator--(void);
        Fixed   operator--(int);
        
        // min && max
        static Fixed&  min(Fixed& a, Fixed& b);
        static Fixed&  max(Fixed& a, Fixed& b);
        static const Fixed&  min(const Fixed& a, const Fixed& b);
        static const Fixed&  max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif