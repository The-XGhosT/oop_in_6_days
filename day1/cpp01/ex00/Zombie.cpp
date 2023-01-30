#include "Zombie.hpp"

Zombie::Zombie()
{

}
Zombie::~Zombie()
{
    std::cout <<"hello  : " << this->name << ESPACE << "has been destroyed" << ENDL;
}
Zombie::Zombie(std::string name)
{
    this->name = name;
}
void Zombie::announce( void )
{
    std::cout << this->name << ":" << ESPACE << "BraiiiiiiinnnzzzZ..." << ENDL;
}
