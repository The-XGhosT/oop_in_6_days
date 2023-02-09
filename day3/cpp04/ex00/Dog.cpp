/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:36:33 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/09 21:43:31 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog:: Dog():Animal("Dog")
{
    
    std::cout << "Dog constructor called" <<std::endl;
}
Dog::~Dog()
{
    std::cout << "Dog destructor called" <<std::endl;
}
void Dog::makeSound() const
{
    std::cout << "wof wof wof" <<std::endl;
}