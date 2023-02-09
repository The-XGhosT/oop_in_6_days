/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:36:27 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/09 21:42:24 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat constructor called" <<std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" <<std::endl;
}

void Cat::makeSound() const
{
    std::cout << "meow meow meow meow" <<std::endl;
}