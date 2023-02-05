/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyas <ilyas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:15:04 by ilyas             #+#    #+#             */
/*   Updated: 2023/02/04 23:25:16 by ilyas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name,Weapon &weapon) : name(name), weapon(weapon)
{
}
void HumanA::  attack()
{  
    std::cout << this->name << " " << "attacks with their" << " " << weapon.getType() << std::endl;
}