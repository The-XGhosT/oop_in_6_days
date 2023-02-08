/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:10:07 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/08 03:14:06 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
class Fixed{
    private:
        int FixedPointValue;
        static const int fractionalBits = 8; 
    public:
        Fixed();
        ~Fixed();
        Fixed& operator = (const Fixed &fx);
        Fixed (const Fixed &fx);
        
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};


#endif
