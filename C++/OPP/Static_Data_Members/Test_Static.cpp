#include <iostream>
using namespace std;

class A
{
    public:
    A() {
        cout << "A's Constructor Called!" << endl;
    }
};

class B
{
    static A a;
    //Static members are only declared in class declaration, not defined
    //This variable could not be used
    public:
        B() {
            cout << "B's Constructor Called!" << endl;
        }
};

int main()
{
    B b;
    return 0;
}