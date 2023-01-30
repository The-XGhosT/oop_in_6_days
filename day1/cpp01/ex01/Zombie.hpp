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