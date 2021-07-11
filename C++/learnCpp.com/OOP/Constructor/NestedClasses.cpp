/*
A class may contain other classes as member variables. 
By default, when the outer class is constructed, the member variables will have their default constructors called. 
This happens before the body of the constructor executes.
*/

#include <iostream>
 
class A
{
public:
    A() { std::cout << "A\n"; }
};
 
class B
{

public:
    B() { std::cout << "B\n"; }
private:
    A m_a;
 
};
 
int main()
{
    // initializing from private to public;
    B b;
    return 0;
}