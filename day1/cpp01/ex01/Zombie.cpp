#include "Zombie.hpp"

Zombie:: Zombie()
{
    this->name = "";
}
Zombie:: ~Zombie()
{
    std::cout << "hello This Zombie" << ESPACE << this->name << ESPACE << "has been destroyed" << ENDL;
}
void Zombie:: SetName(std::string name)
{
    this->name = name;
}
void Zombie::announce( void )
{
    std::cout << this->name << ":" << ESPACE << "BraiiiiiiinnnzzzZ..." << ENDL;
}