/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:28:40 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/06 12:22:45 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
     std::cout << "Default constructor called" << std::endl;
    this->FixedPointValue = 0;
}
Fixed:: ~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
Fixed& Fixed::operator=(const Fixed &fx)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &fx)
        this->FixedPointValue = fx.getRawBits();
    return *this;
}
Fixed::Fixed(const Fixed &c)
{
    std::cout << "Copy constructor called" << std::endl;
   // this->FixedPointValue = c.getRawBits();
   *this = c;
}
int  Fixed:: getRawBits( void )const
{
    return this->FixedPointValue;
}
void Fixed:: setRawBits(int raw)
{
    this->FixedPointValue = raw;
}


//1 => 00000001 ==>10000000
//34.6 ==>

Fixed::Fixed(const int number)
{
    this->FixedPointValue = (number << this->FractionalBits);
    std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float number)
{
    this->FixedPointValue = std::roundf(number  * (1 << this->FractionalBits));
    std::cout << "Float constructor called" << std::endl;
}
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
