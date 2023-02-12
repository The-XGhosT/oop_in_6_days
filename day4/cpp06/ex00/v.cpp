// //conversion of scalar types
// //serialization
// //identify real type



// // the default copy constructor : 

// // @it is another way to initialize an object
// // @used to initialize an object with another object of the same type
// // @no need to create a special constructor for this ; one is already built into all classes


// // normalement constructor kandiroh bach initializiw bih chi object 
// // nakhdo matalan ana 3ndi wa7ed object dyal  bayde9 li f lo3bat chetrange ana 9adit
// // wa7ed o 3tito mowasaf dyalo b7al lon l7arakat mhim 3tito ga3 dakchi dyalo o ana 5asni
// // 10 mno wach radi nb9a kol wa7ed n3tih dok mowasafat ? la maymknch 7na mnin jat fikra dyal 
// // copy constructor finma ghadi n9ad chi object dyal bayde9 ghadi initializih b dok l9iyam


// // assignment operator raha ghi tari9a tanya bach tdir copy constructor 



// // #include <iostream>

// // class Distance{


// // }
// // int main()
// // {
// // }






// //orthodox canonical form

// // The Orthodox Canonical Form (OCF) is a set of guidelines for writing classes in C++98 (and other object-oriented programming languages) that promotes good coding practices and helps to ensure that classes are clear, concise, and maintainable. Before C++11, the OCF recommended following best practices such as:

// // Constructor and destructor: Classes should have a constructor that sets up the object in a valid state, and a destructor to clean up resources. The destructor should be virtual if the class will be used as a base class.

// // Accessor and mutator methods: Classes should provide methods for accessing and modifying the private data members, rather than providing direct access. This helps to enforce encapsulation and maintain the integrity of the object's state.

// // Copy constructor and assignment operator: Classes should have a copy constructor and assignment operator to allow objects to be copied and assigned. The copy constructor should be declared as private or deleted if the object is not meant to be copied.

// // Initialization list: The constructor should use an initialization list to initialize the object's data members, rather than assigning values in the constructor body.

// // Const correctness: Const-correctness should be used to indicate that methods do not modify the object's state, and to ensure that the object's state is not accidentally modified.

// // Naming conventions: Classes should follow a consistent naming convention, such as using camelCase for member variables, and using the m_ prefix to indicate private data members.

// // Consistent indentation and formatting: Classes should be indented and formatted consistently to improve readability and maintainability.

// // These are some of the key principles of the Orthodox Canonical Form before C++11. The goal is to write code that is readable, understandable, and easily maintainable by others.


// // The Orthodox Canonical Form (OCF) helps you in writing clear, concise, and maintainable classes in C++98 (and other object-oriented programming languages). It provides a set of guidelines for writing classes that follow best practices and promote good coding habits. Adhering to the OCF can help you:

// // Enforce encapsulation: The OCF recommends providing accessor and mutator methods to access and modify private data members, which helps to enforce encapsulation and maintain the integrity of the object's state.

// // Improve code readability: The OCF recommends using meaningful names for classes, methods, and variables, and using consistent indentation and formatting, which makes the code more readable and understandable.

// // Avoid common pitfalls: The OCF provides guidelines for avoiding common pitfalls, such as using an initialization list in the constructor and declaring a virtual destructor when needed, which can help prevent bugs and improve the quality of the code.

// // By following the Orthodox Canonical Form, you can write code that is clear, concise, and maintainable, which makes it easier for others to understand and modify in the future.



// Here is an example of a C++98 class that follows the Orthodox Canonical Form and implements all four methods:

// c
// Copy code
// class Person
// {
//   public:
//     Person(const std::string& name, int age);
//     Person(const Person& other);
//     ~Person();
//     Person& operator=(const Person& other);

//     std::string getName() const;
//     int getAge() const;
//     void setName(const std::string& name);
//     void setAge(int age);

//   private:
//     std::string m_name;
//     int m_age;
// };
// The class has a constructor that sets the initial values of the m_name and m_age member variables.
// The class has a copy constructor that creates a new Person object with the same name and age as another Person object.
// The class has a destructor that cleans up any resources that the object may be holding.
// The class has an assignment operator that sets one Person object equal to another.
// The class provides getter methods (getName() and getAge()) for accessing the values of m_name and m_age, respectively.
// The class provides setter methods (setName() and setAge()) for modifying the values of m_name and m_age, respectively.
// This is a complete implementation of the Orthodox Canonical Form, including all four methods. Note that the implementation details of the copy constructor, destructor, and assignment operator may vary depending on the requirements of your specific use case.

