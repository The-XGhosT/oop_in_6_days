/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 08:48:57 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/12 08:49:00 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    //test1
    Zombie a1("Ily@s");
    a1.announce();

    //test2
    Zombie *a2 = newZombie("An@ss");
    a2->announce();

    //test3
    randomChump("Ahm@d");

    delete a2;
}