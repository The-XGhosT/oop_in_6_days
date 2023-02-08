/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:21:25 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/08 14:43:36 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    public:
        ScavTrap(std::string Name);
        ScavTrap();
        ~ScavTrap();
        ScavTrap(ScavTrap &copy);
        ScavTrap& operator=(ScavTrap &rf);
        
        void attack(const std::string& target);
        void	guardGate(void);
        
};

#endif
