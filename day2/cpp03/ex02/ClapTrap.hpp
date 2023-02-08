/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:29:20 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/08 16:57:09 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string Name;
        int HitPoints;
        int EnergyPoints;
        int AttackDamage;
    public:
        ClapTrap(std::string Name);
        ClapTrap();
        ~ClapTrap();
        ClapTrap(const ClapTrap &copy);
        ClapTrap& operator=(const ClapTrap &rf);
        
        
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif