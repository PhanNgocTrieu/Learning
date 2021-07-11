#include <iostream>
using namespace std;

class Empty {

};

int main()
{
    // is of Empty class is 1 - not 0
    cout << sizeof(Empty) << endl;

    // this ensure that the two different objects
    // will have different addresses.
    // see this example:

    Empty a, b;
    
    if (&a == &b)
    {
        cout << "Impossible" << endl;
    }
    else
    {
        cout << "Fine!" << endl;
    }
    
    //Using with "new"
    //-> always return pointers to distinct object 
    
    Empty *p1 = new Empty;
    Empty *p2 = new Empty;

    if (p1 == p2)
    {
        cout << "No Way!!!!" << endl;
    }
    else
    {
        cout << "Fine!!!!" << endl;
    }
    
    
    

    return 0;
}