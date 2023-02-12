/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 08:53:52 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/12 08:54:42 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie:: Zombie()
{
}
Zombie:: ~Zombie()
{
    std::cout << "hello This Zombie" << ESPACE << this->name << ESPACE << "has been destroyed" << ENDL;
}
void Zombie:: SetName(std::string name)
{
    this->name = name;
}
void Zombie::announce( void )
{
    std::cout << this->name << ":" << ESPACE << "BraiiiiiiinnnzzzZ..." << ENDL;
}