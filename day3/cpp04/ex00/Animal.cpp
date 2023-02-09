/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:36:19 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/09 21:48:02 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout<< "Animal default constructor called " <<std::endl;
}

Animal::~Animal()
{
    std::cout<< "Animal destructor called" <<std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout<< "Animal copy constructor called" <<std::endl;
    this->type = copy.getType();
}

Animal &Animal::operator=(const Animal &rf)
{
    std::cout<< "Animal assignment operator called" <<std::endl;
    this->type = rf.getType();
    return *this;
}

Animal::Animal(std::string type)
{
    this->type = type;
    std::cout<< "Animal constructor called" <<std::endl;
}


std::string Animal::getType() const
{
    //std::cout<< "Hello getType " <<this->type <<std::endl;
    return this->type;
}

void Animal::makeSound() const 
{
    std::cout<< "Default Sound" <<std::endl;
}
