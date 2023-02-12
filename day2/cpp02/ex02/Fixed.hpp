/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 03:40:19 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/12 04:20:40 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
class Fixed{
    private:
        int FixedPointValue;
        static const int FractionalBits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &rf);
        Fixed &operator=(const Fixed &rf);

        int getRawBits( void )const;
        void setRawBits(int raw);

        Fixed(const int number);
        Fixed(const float number);
        float toFloat( void )const;
        int toInt( void )const;

        //arithmetic operators
        Fixed operator+(const Fixed &n) const;
        Fixed operator-(const Fixed &n) const;
        Fixed operator*(const Fixed &n) const;
        Fixed operator/(const Fixed &n) const;

        //comparison operators
        bool operator> (const Fixed &n) const;
        bool operator< (const Fixed &n) const;
        bool operator>=(const Fixed &n) const;
        bool operator<=(const Fixed &n) const;
        bool operator==(const Fixed &n) const;
        bool operator!=(const Fixed &n) const;

        //4 increment/decrement
        Fixed operator--(int);
        Fixed operator--();
        Fixed operator++(int);
        Fixed operator++();
        
        //min max
        static Fixed& min(Fixed &fixed1, Fixed &fixed2);
        static Fixed& max(Fixed &fixed1, Fixed &fixed2);
        static const Fixed& min(const Fixed &fixed1, const Fixed &fixed2);
        static const Fixed& max(const Fixed &fixed1, const Fixed &fixed2);

};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif


//c1 = c2 ==> c1.operator=(c2)