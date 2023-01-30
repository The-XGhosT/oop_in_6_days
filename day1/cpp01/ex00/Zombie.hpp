#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP


#include <iostream>
#define ESPACE " "
#define ENDL std::endl

class Zombie{
    private:
        std::string name;
    public :
        Zombie();
        ~Zombie();
        Zombie(std::string name);
        void announce( void );

};
Zombie* newZombie( std::string name );
void randomChump( std::string name );



#endif