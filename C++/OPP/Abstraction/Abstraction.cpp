#include <iostream>
using namespace std;

// Abstraction decide which data is visible to the worlr
// which is not
class implementAbstraction
{
    private:
        int a,b;
    public:
        //method to set values of private members
        void set(int x, int y)
        {
            a = x;
            b = y;
        }

        void display()
        {
            cout << "a = " << a << endl;
            cout << "b = " << b << endl;
        }
};

int main()
{
    implementAbstraction iA;
    iA.set(3,5);
    iA.display();
    return 0;
}