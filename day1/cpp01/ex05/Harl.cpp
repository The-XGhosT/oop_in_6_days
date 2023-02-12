/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 10:26:36 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/12 10:26:40 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
    std::string msg;
    msg = "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!";
    std::cout << msg << std::endl;
}
void Harl::info( void )
{
    std::string msg;
    msg = "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
}
void Harl::warning( void )
{
    std::string msg;
    msg = "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.";
    std::cout << msg << std::endl;
}
void Harl::error( void )
{
    std::string msg;
    msg = "This is unacceptable! I want to speak to the manager now.";
    std::cout << msg << std::endl;
}
void Harl::complain(std::string level)
{
     void (Harl::*funcs[4])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string levels[] = {"DEBUG","INFO","WARNING","ERROR"};
    int i = 0;
  while (i < 4 && levels[i].compare(level)) {
    i++;
  }
  while(i < 4) {
    (this->*funcs[i])();
    break;
  }
}