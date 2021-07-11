#include <iostream>
using namespace std;

class Geeks
{
    public:
    void func(int x)
    {
        cout << "Value of x is " << x <<endl;
    };

    void func(double x)
    {
        cout << "value of x is " << x << endl;
    };

    void func(int x, int y)
    {
        cout << "value of x and y is " << x << "," << y << endl;
    };
};
int main()
{
    Geeks obj1;

    //the first 'func' is called
    obj1.func(7);

    //the second 'funfc' is called
    obj1.func(9.213);

    //the third 'func' is called
    obj1.func(85,23);
    return 0;
}