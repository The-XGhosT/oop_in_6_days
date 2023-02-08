/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:29:20 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/08 14:51:32 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string Name;
        int HitPoints;
        int EnergyPoints;
        int AttackDamage;
    public:
        ClapTrap(std::string Name);
        ClapTrap();
        ~ClapTrap();
        ClapTrap(ClapTrap &copy);
        ClapTrap& operator=(ClapTrap &rf);
        
        
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif