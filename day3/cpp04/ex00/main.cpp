/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:36:51 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/09 22:43:59 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */





//cat



//dog

//WrongAnimal







/*int main()
{
    //tester Animal
    Animal a1("hero");
    Animal a2(a1);
    Animal a3;
    a3 = a2;
    
    a1.getType();
    a1.makeSound();
    
    Cat cat;
    cat.makeSound();
    Dog dog;
    dog.makeSound();
    //virtual bal inheritance 5edam Nadi 
    //virtual function
    //virtual destructor
    
}*/
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
int main()
{
    const Animal *meta = new Animal();

    const Animal *j = new Dog();
    const Animal *i= new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl; 
    i->makeSound(); //will output the cat sound! 
    j->makeSound();
    meta->makeSound();
    

    return 0;

}
    
    //test Wronganimal
    // const WrongAnimal *meta = new WrongAnimal();

    // const WrongAnimal *i= new WrongCat();

    // std::cout << i->getType() << " " << std::endl; 
    // i->makeSound(); //will output the cat sound! 
    // meta->makeSound();
