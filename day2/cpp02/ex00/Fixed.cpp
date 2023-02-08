/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:10:31 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/05 17:26:50 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->FixedPointValue = 0;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
Fixed& Fixed::operator= (const Fixed &fx)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &fx)
        this->FixedPointValue = fx.getRawBits();
    return *this;
}

Fixed:: Fixed(const Fixed &fx)
{
    std::cout << "Copy constructor called" << std::endl;
    this->FixedPointValue = fx.getRawBits();
}

int Fixed:: getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->FixedPointValue;
}
void Fixed::setRawBits( int const raw )
{
    this->FixedPointValue = raw;
}