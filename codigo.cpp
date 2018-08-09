// Example program
#include <iostream>
#include <string>

int main()
{
    std::string fullname;
  std::cout << "enter your full name" << std::endl;
  
  getline(std::cin,fullname);
  std::cout << "your full name is: " << fullname << std::endl;
  return 0;

}