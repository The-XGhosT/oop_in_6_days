/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyas <ilyas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:15:11 by ilyas             #+#    #+#             */
/*   Updated: 2023/02/04 23:25:27 by ilyas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
class HumanA{
    private:
        std::string name;
        Weapon &weapon;
    public:
        HumanA(std::string name,Weapon &weapon);
        void attack();
};

#endif