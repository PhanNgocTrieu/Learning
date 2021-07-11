// Thao tác trên con trỏ

#include <iostream>
using namespace std;

int main(int argc, char** argv){
    int a[100];
    int *p = a;
    // checking p++ => after p = p + 1 => address that pointer p point to was changed up to 4 byte (because int type);
    for (size_t i = 0; i < 10; i++)
    {
        cout << p << endl;
        p++;
    }

    // numberic mathematic:
    int x = 20, y = 15;
    int *px, *py, temp;
    px = &x; // pointer x point to address of x
    py = &y; // pointer y point to address of y
    temp = *px; // temp = value at address of x
    *px = *py; // value at address of x = value of address of y ==> assign value at address of y to x
    *py = temp; // assign value of temp (value at address of x before) to y

    // checking: => values were exchanged;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}