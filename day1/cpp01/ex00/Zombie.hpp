/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 08:51:11 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/12 08:51:50 by iqabbal          ###   ########.fr       */
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
    public :
        ~Zombie();
        Zombie(std::string name);
        void announce( void );

};
Zombie* newZombie( std::string name );
void randomChump( std::string name );



#endif