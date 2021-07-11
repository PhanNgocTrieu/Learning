// When deriving a struct from a class/struct, default access-specifier for a base class/struct is public. 
// And when deriving a class, default access specifier is private.
// For example program 3 fails in compilation and program 4 works fine

#include <iostream>

class Base{
  public:
    int x;  
};

//class Derived : Base {}; // this is equilatent to class Derived : private Base {}

struct Derived : Base {}; // this is equilatent to struct Derived : public Base {}

int main(void)
{
    // if we block class Derived : Base -> program run!
    // if we un-block class Derived : Base -> program failed 
    Derived d;
    d.x = 20;
    std::cout << d.x << std::endl;
}