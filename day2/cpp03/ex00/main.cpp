/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:20:42 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/08 16:32:28 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    //testex00
    ClapTrap g("hero");
    g.attack("zero");
    g.takeDamage(5);
    g.beRepaired(5);
    
    g.attack("zero");
    g.beRepaired(5);
    g.attack("zero");
    g.beRepaired(5);
    g.attack("zero");
    g.beRepaired(5);
    g.attack("zero");
    g.beRepaired(5);
    
    
    g.takeDamage(30);
    
    g.attack("zero");
    g.beRepaired(5);
    
}
