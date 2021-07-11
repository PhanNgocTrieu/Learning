// CPP program to illustrate
// concept of Virtual Functions
 
#include <iostream>
using namespace std;
 
class base {
public:
    void print()
    {
        cout << "print base class" << endl;
    }
 
    virtual void show()
    {
        cout << "show base class" << endl;
    }
};
 
class derived : public base {
public:
    void print()
    {
        cout << "print derived class" << endl;
    }
 
    void show()
    {
        cout << "show derived class" << endl;
    }
};
 
int main()
{
    base* bptr;
    derived d;
    bptr = &d;
    

    base * bptr2 = new derived;

    // virtual function, binded at runtime
    bptr->print();

    // Non-virtual function, binded at compile time
    bptr->show();


    bptr2->print();
    bptr2->show();

}