#include <iostream>
using namespace std;
class Father
{
    public:
        Father()
        {
            cout << "this is a father's address: "<< this << endl;
        }
};

class Child : public Father { // child inherite from father!
    public:
        Child()
        {   // because of inheritance from the father so child have the same address
            cout << "this is a child's address: "<< this << endl;
        }
};

int main()
{
    Child ch;
    return 0;
}