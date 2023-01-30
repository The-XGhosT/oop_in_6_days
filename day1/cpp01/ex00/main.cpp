#include "Zombie.hpp"

int main()
{
    //test1
    Zombie a1("Ily@s");
    a1.announce();

    //test2
    Zombie *a2 = newZombie("An@ss");
    a2->announce();

    //test3
    randomChump("Ahm@d");

    delete a2;
}