/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 08:48:42 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/12 09:13:53 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"

HumanA::HumanA(std::string name,Weapon &weapon) : name(name), weapon(weapon)
{
}
HumanA::~HumanA()
{
}
void HumanA::  attack()
{ 
    if(this->weapon.getType() != "") 
        std::cout << this->name << " " << "attacks with their" << " " << weapon.getType() << std::endl;
}