/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 08:51:01 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/12 08:51:46 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout <<"hello  : " << this->name << ESPACE << "has been destroyed" << ENDL;
}
Zombie::Zombie(std::string name)
{
    this->name = name;
}
void Zombie::announce( void )
{
    std::cout << this->name << ":" << ESPACE << "BraiiiiiiinnnzzzZ..." << ENDL;
}
