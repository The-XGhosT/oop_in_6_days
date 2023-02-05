/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyas <ilyas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:15:23 by ilyas             #+#    #+#             */
/*   Updated: 2023/02/04 23:12:25 by ilyas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
class HumanB{
    private:
        std::string name;
        Weapon *weapon;
    public:
        HumanB(std::string name);
        void setWeapon(Weapon &weapon);
        void attack();
};

#endif