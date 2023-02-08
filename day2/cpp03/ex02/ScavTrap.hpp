/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:21:25 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/08 16:56:51 by iqabbal          ###   ########.fr       */
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
        ScavTrap(const ScavTrap &copy);
        ScavTrap& operator=(const ScavTrap &rf);
        
        void attack(const std::string& target);
        void	guardGate(void);
        
};

#endif
