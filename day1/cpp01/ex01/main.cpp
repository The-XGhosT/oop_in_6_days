/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 08:53:35 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/12 08:53:37 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    //test1
    Zombie *z;
    int number_of_zombies;
    number_of_zombies = 5;
    z = zombieHorde(number_of_zombies,"fofo");
    for(int i = 0;i < number_of_zombies; i++ ){
        z[i].announce();
    }

    delete []z;
}