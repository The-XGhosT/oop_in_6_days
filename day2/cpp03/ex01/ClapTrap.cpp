/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:29:34 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/08 16:27:56 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->Name = "";
    this->HitPoints = 10 ;
    this->EnergyPoints = 10 ;
    this->AttackDamage = 0;
    std::cout << "Default constructor called"<<std::endl;
}

ClapTrap::ClapTrap(std::string Name)
{
    this->Name = Name;
    this->HitPoints = 10 ;
    this->EnergyPoints = 10 ;
    this->AttackDamage = 0;
     std::cout<< this->Name <<" constructor called"<<std::endl;
}

ClapTrap::  ~ClapTrap()
{
    std::cout<< this->Name << " destructor called"<<std::endl;
}

ClapTrap::  ClapTrap(ClapTrap &copy)
{
    std::cout<< "Copy constructor called" <<std::endl;
    this->Name = copy.Name;
    this->HitPoints = copy.HitPoints ;
    this->EnergyPoints = copy.EnergyPoints ;
    this->AttackDamage = copy.AttackDamage;
}

ClapTrap&ClapTrap:: operator=(ClapTrap &rf)
{
    std::cout <<"Copy assignment operator called" <<std::endl;
    this->Name = rf.Name;
    this->HitPoints = rf.HitPoints;
    this->EnergyPoints = rf.EnergyPoints;
    this->AttackDamage = rf.AttackDamage;
    return *this;
}



void ClapTrap::attack(const std::string& target)
{
    if(this->HitPoints != 0 && this->EnergyPoints > 0)
    {
        this->EnergyPoints--;
        std::cout << "ClapTrap " << this->Name << " attack " << target <<" causing " << this->AttackDamage <<" point of damage "<<std::endl;
    }
    else
        std::cout << "ClapTrap " << this->Name << " don't able to attack" <<std::endl;
    
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->HitPoints -= amount;
    if(this->HitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->Name << " is die " <<std::endl;
        if(this->HitPoints < 0)
            this->HitPoints = 0;
        return;
    }
    std::cout << "ClapTrap " << this->Name << " lost " << amount <<" from HitPoints" <<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
  
    if(this->EnergyPoints > 0 && this->HitPoints != 0)
    {
        this->HitPoints += amount;
        this->EnergyPoints--;
        std::cout <<"ClapTrap " << this->Name<< " is be repaired and HitPoints now is : " << this->HitPoints <<std::endl;
    }
    else
       std::cout <<"ClapTrap " << this->Name<< " don't able to repaired" <<std::endl;
}