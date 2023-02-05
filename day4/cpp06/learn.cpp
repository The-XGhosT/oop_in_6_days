//type conversion
//static_cast <datatype>(exp)

#include <iostream>

int main()
{
   std::cout <<  static_cast<int>(9.7) << std::endl;
   std::cout <<  static_cast<int>(15/2) << std::endl;
   std::cout <<  static_cast<float>(15)/2 << std::endl;
}