/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:35:04 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/08 17:49:16 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"



FragTrap:: FragTrap():ClapTrap()
{
    std::cout << "FragTrap !!! Default constructor is called" << std::endl;
    this->Name = "";
    this->HitPoints = 100 ;
    this->EnergyPoints = 100 ;
    this->AttackDamage = 30;
}

FragTrap:: ~FragTrap()
{
    std::cout << "FragTrap !!! destructor is called" << std::endl;
}

FragTrap::FragTrap(std::string Name):ClapTrap(Name)
{
    std::cout << "FragTrap !!! constructor is called" << std::endl;
    this->HitPoints = 100 ;
    this->EnergyPoints = 100 ;
    this->AttackDamage = 30;
}

FragTrap:: FragTrap(const FragTrap &copy)
{
    std::cout << "FragTrap !!! copy constructor is called" << std::endl;
    this->Name = copy.Name;
    this->HitPoints = copy.HitPoints ;
    this->EnergyPoints = copy.EnergyPoints ;
    this->AttackDamage = copy.AttackDamage;
}


FragTrap& FragTrap::operator= (const FragTrap &rf)
{
    std::cout << "FragTrap !!! copy assignement operator is called" << std::endl;
    this->Name = rf.Name;
    this->HitPoints = rf.HitPoints;
    this->EnergyPoints = rf.EnergyPoints;
    this->AttackDamage = rf.AttackDamage;
    return *this;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->name << " a high five." << std::endl;
}