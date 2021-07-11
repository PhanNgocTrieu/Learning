#include <iostream>
using namespace std;


int main()
{
    int *p_arr[5];
    for (int i = 0; i < 5; i++)
    {
        p_arr[i] = new int;
        *p_arr[i] = i * 20;
    }
    
    // print:
    for (int i = 0; i < 5; i++)
    {
        cout << p_arr[i] << "==>" << *p_arr[i] << endl;
    }
    

    return 0;
}