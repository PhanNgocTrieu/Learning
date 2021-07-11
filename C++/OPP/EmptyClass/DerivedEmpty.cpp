#include <iostream>

using namespace std;

class Empty {};

class Derived : Empty {
    int a;
};

class Derived1 : public Empty {}; // 1 byte
class Derived2 : virtual public Empty {}; // 4 byte
class Derived3 : public Empty {
    char c; 
}; // 1 byte
class Derived4 : virtual public Empty { 
    char c;
}; // 8 byte

class Dummy {
    char c;
}; // 1 byte

int main()
{
    cout << sizeof(Derived) << endl;
    // Note that the output is not greater than 4. 
    // There is an interesting rule that says that
    // an empty base class need not be represented 
    // by a separate byte. So compilers are free 
    // to make optimization in case of empty base classes.
    // As an excercise, 
    // try the following program on your compiler.

    cout << sizeof(Derived1) << endl;
    cout << sizeof(Derived2) << endl;
    cout << sizeof(Derived3) << endl;
    cout << sizeof(Derived4) << endl;
    cout << sizeof(Dummy);

    return 0;
}