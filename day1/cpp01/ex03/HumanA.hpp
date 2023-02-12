/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 08:59:44 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/12 08:59:45 by iqabbal          ###   ########.fr       */
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
        ~HumanA();
        void attack();
};

#endif