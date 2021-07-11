
#include <iostream>

class Base
{
public:
    const char* getName() const { return "Base"; }
};
 
class Derived: public Base
{
public:
    const char* getName() const { return "Derived"; }
};

int main()
{
    const Base *b = new Derived;

    Derived derived;
    const Base &base { derived }; // const Base base = &derived;

    std::cout << base.getName() << std::endl;
    std::cout << base.Base::getName() << std::endl;

    // Calls Base::GetName() instead of the virtualized Derived::GetName()
    // std::cout << base.Base::getName() << '\n';

    // std::cout << "B:" << std::endl;
    // std::cout << base.Base::getName() << '\n'; // we can use this for access base class
    // std::cout << base.getName() << '\n';
    return 0;
}