/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:35:22 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/08 17:13:28 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
  public:
    FragTrap();
    ~FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &copy);
    FragTrap &operator= (const FragTrap &rf);
    
    void highFivesGuys(void);  
};

#endif
