/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyas <ilyas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:15:17 by ilyas             #+#    #+#             */
/*   Updated: 2023/02/04 23:15:06 by ilyas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
        this->name = name;
        this->weapon = NULL;
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