/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:21:21 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/08 15:16:51 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->Name = "";
    this->HitPoints = 100 ;
    this->EnergyPoints = 50 ;
    this->AttackDamage = 20;
    std::cout << "Default constructor called"<<std::endl;
}

ScavTrap::ScavTrap(std::string Name)
{
    this->Name = Name;
    this->HitPoints = 100 ;
    this->EnergyPoints = 50 ;
    this->AttackDamage = 20;
     std::cout<< this->Name <<" ScavTrap constructor called"<<std::endl;
}

ScavTrap::  ~ScavTrap()
{
    std::cout<< this->Name << " ScavTrap destructor called"<<std::endl;
}

ScavTrap::  ScavTrap(ScavTrap &copy)
{
    std::cout<< "ScavTrap Copy constructor called" <<std::endl;
    this->Name = copy.Name;
    this->HitPoints = copy.HitPoints ;
    this->EnergyPoints = copy.EnergyPoints ;
    this->AttackDamage = copy.AttackDamage;
}


ScavTrap& ScavTrap:: operator=(ScavTrap &rf)
{
    std::cout <<"ScavTrap Copy assignment operator called" <<std::endl;
    this->Name = rf.Name;
    this->HitPoints = rf.HitPoints;
    this->EnergyPoints = rf.EnergyPoints;
    this->AttackDamage = rf.AttackDamage;
    return *this;
}



void ScavTrap::attack(const std::string& target)
{
    if(this->HitPoints != 0 && this->EnergyPoints > 0)
    {
        this->EnergyPoints--;
        std::cout << "ScavTrap " << this->Name << " attack " << target <<" causing " << this->AttackDamage <<" point of damage "<<std::endl;
    }
    else
        std::cout << "ScavTrap " << this->Name << " don't able to attack" <<std::endl;
    
}

void guardGate()
{
     std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}