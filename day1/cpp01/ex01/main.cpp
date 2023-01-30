#include "Zombie.hpp"

int main()
{
    //test1
    Zombie *z;
    int number_of_zombies;
    number_of_zombies = 5;
    z = zombieHorde(number_of_zombies,"fofo");
    for(int i = 0;i < number_of_zombies; i++ ){
        z[i].announce();
    }

    delete []z;
}