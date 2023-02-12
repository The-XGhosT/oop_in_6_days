/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 02:44:27 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/12 10:44:49 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//canonical class form
Fixed::Fixed()
{
    this->FixedPointValue = 0;
}
Fixed:: ~Fixed()
{

}
Fixed& Fixed::operator=(const Fixed &rf)
{
    if(this != &rf)
        this->FixedPointValue = rf.getRawBits();
    return *this;
}
Fixed::Fixed(const Fixed &rf)
{
   this->FixedPointValue = rf.getRawBits();
   *this = rf;
}


//getters and setters
int  Fixed:: getRawBits( void )const
{
    return this->FixedPointValue;
}
void Fixed:: setRawBits(int raw)
{
    this->FixedPointValue = raw;
}


//constructor int/float
Fixed::Fixed(const int number)
{
    this->FixedPointValue = (number << this->FractionalBits);
}
Fixed::Fixed(const float number)
{
    this->FixedPointValue = roundf(number  * (1 << this->FractionalBits));
}


//conver
float Fixed::toFloat( void )const
{
    
    return static_cast<float>(this->getRawBits()) / (1 << this->FractionalBits);
}
int Fixed::toInt( void )const
{
    return this->FixedPointValue >> this->FractionalBits;
}



std::ostream & operator<<( std::ostream & o, Fixed const & i ) {
    o << i.toFloat();
    return o;
}


//arithmetic operators

// +
Fixed Fixed::operator+(const Fixed &n) const
{
    float res = this->toFloat() + n.toFloat();
    Fixed tmp(res);
    return tmp;
}

// -

Fixed Fixed::operator-(const Fixed &n) const
{
    float res = this->toFloat() - n.toFloat();
    Fixed tmp(res);
    return tmp;
}

// *

Fixed Fixed::operator*(const Fixed &n) const
{
    float res = this->toFloat() * n.toFloat();
    Fixed tmp(res);
    return tmp;
}

// /

Fixed Fixed::operator/(const Fixed &n) const
{
    float res = this->toFloat() / n.toFloat();
    Fixed tmp(res);
    return tmp;
}


//comparison operators

// >
bool Fixed::operator>(const Fixed &n)const
{
    if(this->getRawBits() > n.getRawBits())
        return true;
    return false;
    
}


// <
bool Fixed::operator<(const Fixed &n)const 
{
    if(this->getRawBits() < n.getRawBits())
        return true;
    return false;
    
}


// >=
bool Fixed::operator>=(const Fixed &n)const 
{
    if(this->getRawBits() >= n.getRawBits())
        return true;
    return false;
    
}

// <=
bool Fixed::operator<=(const Fixed &n)const 
{
    if(this->getRawBits() <= n.getRawBits())
        return true;
    return false;
    
}

// ==
bool Fixed::operator==(const Fixed &n)const 
{
    if(this->getRawBits() == n.getRawBits())
        return true;
    return false;
    
}

// !=
bool Fixed::operator !=(const Fixed &n)const 
{
    if(this->getRawBits() != n.getRawBits())
        return true;
    return false;
    
}

//increament/decrement(pre-increment and post-increment)


// --(n)
Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->FixedPointValue--;
    return tmp;
}
// (n)--
Fixed Fixed::operator--()
{
    this->FixedPointValue--;
    return *this;
}
// ++(n)
Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->FixedPointValue++;
    return tmp;
}
// (n)++
Fixed Fixed::operator++()
{
    this->FixedPointValue++;
    return *this;
}

//---------------------------------------------------------//

//min
Fixed& Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
    if (fixed1 < fixed2)
        return (fixed1);
    return (fixed2);
}


//max
Fixed& Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
    if (fixed1 > fixed2)
        return (fixed1);
    return (fixed2);
}

//min const
const Fixed& Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
    if (fixed1 < fixed2)
        return (fixed1);
    return (fixed2);
}
//max const
const Fixed& Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
    if (fixed1 > fixed2)
        return (fixed1);
    return (fixed2);
}

