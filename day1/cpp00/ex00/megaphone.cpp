#include <iostream>
#include <cctype> //toupper()

#define ESPACE " "
#define ENDL std::endl

int main(int ac , char **av)
{
    if(ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << ENDL;
    }
    else
    {
        for (int i = 1;av[i];i++)
        {
            for(int j = 0;av[i][j];j++)
            {
                char c;
                c = toupper(av[i][j]);
                std::cout << c ;
            }
            std::cout << ESPACE ;
        }
        std::cout << ENDL;
    }
}