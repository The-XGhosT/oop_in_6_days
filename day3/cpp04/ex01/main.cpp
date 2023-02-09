#include<iostream>
#include <string>

//Brain

//Animal
class Animal
{
    protected:
        std::string type;
    public:
        //orthodox form
        Animal();
        virtual ~Animal();
        Animal(const Animal &copy);
        Animal &operator=(const Animal &rf);

        Animal(std::string type);
        std::string getType() const;
        virtual void makeSound() const ;
};


Animal::Animal()
{
    this->type = "Animal";
    std::cout<< "Animal default constructor called " <<std::endl;
}

Animal::~Animal()
{
    std::cout<< "Animal destructor called" <<std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout<< "Animal copy constructor called" <<std::endl;
    this->type = copy.getType();
}

Animal &Animal::operator=(const Animal &rf)
{
    std::cout<< "Animal assignment operator called" <<std::endl;
    this->type = rf.getType();
    return *this;
}

Animal::Animal(std::string type)
{
    this->type = type;
    std::cout<< "Animal constructor called" <<std::endl;
}


std::string Animal::getType() const
{
    //std::cout<< "Hello getType " <<this->type <<std::endl;
    return this->type;
}

void Animal::makeSound() const 
{
    std::cout<< "Default Sound" <<std::endl;
}

//cat
class Cat : public Animal{
    private:
        Brain* brain;
    public :
  Cat();
  ~Cat();
  void makeSound() const;
};
Cat::Cat() : Animal("Cat")
{
    this->brain = new Brain();
    std::cout << "Cat constructor called" <<std::endl;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat destructor called" <<std::endl;
}

void Cat::makeSound() const
{
    std::cout << "meow meow meow meow" <<std::endl;
}


//dog
class Dog : public Animal{
    private:
        Brain* brain;
    public :
  Dog();
  ~Dog();
  void makeSound() const;
};

Dog:: Dog():Animal("Dog")
{
    this->brain = new Brain();
    std::cout << "Dog constructor called" <<std::endl;
}
Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog destructor called" <<std::endl;
}
void Dog::makeSound() const
{
    std::cout << "wof wof wof" <<std::endl;
}
//WrongAnimal
class WrongAnimal
{
    protected:
        std::string type;
    public:
        //orthodox form
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal &operator=(const WrongAnimal &rf);

        WrongAnimal(std::string type);
        std::string getType() const;
        void makeSound() const ;
};


WrongAnimal::WrongAnimal()
{
    this->type = "Animal";
    std::cout<< "Animal default constructor called " <<std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout<< "Animal destructor called" <<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout<< "Animal copy constructor called" <<std::endl;
    this->type = copy.getType();
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rf)
{
    std::cout<< "Animal assignment operator called" <<std::endl;
    this->type = rf.getType();
    return *this;
}

WrongAnimal::WrongAnimal(std::string type)
{
    this->type = type;
    std::cout<< "Animal constructor called" <<std::endl;
}


std::string WrongAnimal::getType() const
{
    //std::cout<< "Hello getType " <<this->type <<std::endl;
    return this->type;
}

void WrongAnimal::makeSound() const 
{
    std::cout<< "Wrong Sound" <<std::endl;
}


//WrongCat
class WrongCat : public WrongAnimal{
    public :
  WrongCat();
  ~WrongCat();
  void makeSound() const;
};
WrongCat::WrongCat() : WrongAnimal("Cat")
{
    std::cout << "Cat constructor called" <<std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Cat destructor called" <<std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "meow meow meow meow" <<std::endl;
}


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
//int main()
//{
    /*const Animal *meta = new Animal();

    const Animal *j = new Dog();
    const Animal *i= new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl; 
    i->makeSound(); //will output the cat sound! 
    j->makeSound();
    meta->makeSound();*/
    
    //test Wronganimal
    /*const WrongAnimal *meta = new WrongAnimal();

    const WrongAnimal *i= new WrongCat();

    std::cout << i->getType() << " " << std::endl; 
    i->makeSound(); //will output the cat sound! 
    meta->makeSound();*/

    //return 0;

//}



int main()
{
    //db nta mni kat9ad chi object jdid kay3ayet 3la
    //constructor o howa 9alek 5as object brain ykon
    //f heap memory so nta 5asek t3ayet 3la new f 
    Brain b;
}