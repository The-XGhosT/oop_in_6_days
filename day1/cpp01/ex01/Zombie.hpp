/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 08:54:02 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/12 08:54:04 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP


#include <iostream>
#define ESPACE " "
#define ENDL std::endl

class Zombie{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void SetName(std::string name);
        void announce( void );
};
Zombie* zombieHorde( int N, std::string name );
//


#endif