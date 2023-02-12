/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 03:40:07 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/12 10:46:32 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    //my test
    Fixed ex1(12);
    Fixed ex2(12.01f);
    
    // std::cout <<"ex1 + ex2 = " << ex1 + ex2 << std::endl;
    // std::cout <<"ex1 - ex2 = " << ex1 - ex2 << std::endl;
    // std::cout <<"ex1 * ex2 = " << ex1 * ex2 << std::endl;
    // std::cout <<"ex1 / ex2 = " << ex1 / ex2 << std::endl;

    

    //comparaison
//    if(ex1 > ex2)
//         std::cout << "True ex1 > ex2" <<std::endl;
//    else
//         std::cout << "False ex1 > ex2" << std::endl;

//     if(ex1 < ex2)
//         std::cout << "True ex1 < ex2" <<std::endl;
//    else
//         std::cout << "False ex1 < ex2" << std::endl;

//     if(ex1 >= ex2)
//         std::cout << "True ex1 >= ex2" <<std::endl;
//    else
//         std::cout << "False ex1 >= ex2" << std::endl;

//     if(ex1 <= ex2)
//         std::cout << "True  ex1 <= ex2" <<std::endl;
//    else
//         std::cout << "False  ex1 <= ex2" << std::endl;
    
//     if(ex1 == ex2)
//         std::cout << "True ex1 == ex2" <<std::endl;
//    else
//         std::cout << "False ex1 == ex2" << std::endl;
        
//     if(ex1 != ex2)
//         std::cout << "True ex1 != ex2" <<std::endl;
//    else
//         std::cout << "False ex1 != ex2" << std::endl;

    

//     const Fixed ex3(7);
//     const Fixed ex4(8);
    
//     std::cout << "min ex1 .ex2 = " << Fixed::min(ex1,ex2) << std::endl;
//     std::cout << "max ex1 . ex2 = " << Fixed::max(ex1,ex2) << std::endl;
//     std::cout << "min \"const\"ex3 . ex4 = " << Fixed::min(ex3,ex4) << std::endl;
//     std::cout << "max \"const\"ex3 . ex4 = " << Fixed::max(ex3,ex4) << std::endl;

    

    
    return 0;
}