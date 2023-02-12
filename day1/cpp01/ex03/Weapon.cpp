/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 09:10:26 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/12 09:10:28 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType()
{
    return(this->type);
}
void Weapon::setType(std::string type)
{
    this->type = type;
}
Weapon::Weapon(std::string type)
{
    setType(type);
}

Weapon::~Weapon()
{
    
}