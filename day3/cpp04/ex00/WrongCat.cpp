/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:44:26 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/09 21:50:28 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Cat")
{
    std::cout << "Cat constructor called" <<std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Cat destructor called" <<std::endl;
}


void WrongCat::makeSound() const
{
    std::cout << "meow meow meow meow" <<std::endl;
}