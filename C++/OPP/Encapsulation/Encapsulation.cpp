#include <iostream>
using namespace std;

class Encapsulation
{
    private:
        //data hidden from outside world
        int x;
    public:
        //function to set value of variable x
        void set(int a)
        {
            x = a;
        }

        //function to return value of variable x
        int get()
        {
            return x;
        }
};

int main()
{
    Encapsulation ect;
    ect.set(10);
    cout << ect.get() << endl;
    return 0;
}