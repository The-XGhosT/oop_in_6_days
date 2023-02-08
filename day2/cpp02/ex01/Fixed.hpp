/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:28:48 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/05 18:03:59 by iqabbal          ###   ########.fr       */
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
        Fixed& operator=(const Fixed &fx);
        Fixed(const Fixed &c);
        int getRawBits( void )const;
        void setRawBits(int raw);


        Fixed(const int number);
        Fixed(const float number);
        float toFloat( void )const;
        int toInt( void )const;
    
};
std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif