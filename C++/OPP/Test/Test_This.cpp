#include <iostream>
using namespace std;

class Test {
    private:
        int pos_x;
        int pos_y;
    public:
    Test(int x, int y) {
        pos_x = x;
        pos_y = y;
    }

    Test *fun()
    {
        return this;
    }

    int Demension()
    {
        return pos_y - pos_x;
    }
};

int main()
{
    Test obj1(3,5);
    Test obj2(1,21);
    cout << obj1.fun() << endl; // we can see that return this will return address of obj
    cout << obj2.fun() << endl;
    cout << "Demension from x to y: " << obj1.Demension() << endl;
    return 0;
}