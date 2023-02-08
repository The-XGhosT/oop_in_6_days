#include <iostream>
#include <string>


class A{
    private:
        int *a;
    public :
        A(int *a)
        {
            this->a = a;
        }
        void change_(int *v)
        {
            this->a = v;
            std::cout << "v is : " << *v << std::endl;
        }
        void get()
        {
            std::cout << "valeur is : " << *this->a << std::endl;
        }
};

int main()
{
    int b = 7;
    A a1(&b);
    a1.get();
    A a2(a1);
    a2.get();
    A a3(&b);
    a3 = a2;
    a3.get();
    int c = 9;
    a2.change_(&c);
    a3.get();
    std::cout << &a1 << std::endl;
    std::cout << &a2 << std::endl;
    std::cout << &a3 << std::endl;
}


// #include <iostream>

// using namespace std;

// class Car {
//  public:
//   Car(string name) : name_(name) {}
//   string name_;
// };

// int main() {
//   Car *car1 = new Car("red car");

//   // Shallow copy
//   Car *garage2 = car1; //db kayna red car
  
//   car1->name_ = "blue car";
//   cout << "garage2->name_: " << garage2->name_ << endl;
//   // Output: garage2->name_: blue car

//   // Deep copy
//   Car *garage3 = new Car(car1->name_);
//   car1->name_ = "green car";
//   cout << "garage3->name_: " << garage3->name_ << endl;
//   // Output: garage3->name_: blue car
//   delete car1;
//   delete garage3;
  
//   return 0;
// }


// In this example, we create a Car object car1 and then create a shallow copy garage2 using = operator.
// Since garage2 is just a reference to car1, when we change car1->name_ to "blue car", the value of garage2->name_ also changes to "blue car".

// Next, we create a deep copy garage3 using the constructor Car(car1->name_) and assign the value of car1->name_ to it.
// Even if we change the value of car1->name_ to "green car", the value of garage3->name_ remains "blue car".