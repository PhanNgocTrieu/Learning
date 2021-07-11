#include <iostream>
using namespace std;

class base
{
    public:
    virtual void print()
    {
        cout << "print base class" << endl;
    }

    void show()
    {
        cout << "show base class " << endl;
    }
};

//using derived class to definate for base class 
class derived : public base
{
    public:
    void print() //print () is already virtual function is derived
    {
        cout << "print derived class " << endl;
    }

    void show()
    {
        cout << "show derived class " << endl;
    }
};

int main()
{
    base *bptr;
    derived d;
    bptr = &d;

    //virtual function, binded at runtime (Runtime polymorphism)
    bptr -> print();

    //Non-virtual function, binded at compile time
    bptr -> show();
    
    return 0;
}