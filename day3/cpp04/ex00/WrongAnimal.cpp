/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:45:16 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/09 21:49:55 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"



WrongAnimal::WrongAnimal()
{
    this->type = "Animal";
    std::cout<< "Animal default constructor called " <<std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout<< "Animal destructor called" <<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout<< "Animal copy constructor called" <<std::endl;
    this->type = copy.getType();
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rf)
{
    std::cout<< "Animal assignment operator called" <<std::endl;
    this->type = rf.getType();
    return *this;
}

WrongAnimal::WrongAnimal(std::string type)
{
    this->type = type;
    std::cout<< "Animal constructor called" <<std::endl;
}


std::string WrongAnimal::getType() const
{
    //std::cout<< "Hello getType " <<this->type <<std::endl;
    return this->type;
}

void WrongAnimal::makeSound() const 
{
    std::cout<< "Wrong Sound" <<std::endl;
}
