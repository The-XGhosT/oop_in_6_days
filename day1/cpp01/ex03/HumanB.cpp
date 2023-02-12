/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 08:59:57 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/12 09:14:55 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
        this->name = name;
        this->weapon = NULL;
}
HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}
void HumanB::  attack()
{
    if(this->weapon->getType() != "")
        std::cout << this->name << " " << "attacks with their" << " " << this->weapon->getType() << std::endl;
}