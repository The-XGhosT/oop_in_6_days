/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyas <ilyas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:15:37 by ilyas             #+#    #+#             */
/*   Updated: 2023/02/04 22:26:30 by ilyas            ###   ########.fr       */
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