#include <iostream>

int main() {
    int a[] = {0,1,2,3,4,5,6,7,8,9};
    int *p;
    p = a; // point to the first place | p -> a[0]


    
    for (int i = 0; i < 10; i++)
    {
        *(p+i) *= 10; // tương đương a[i] = a[i] + 10;
        std::cout << "a[" << i << "] = " << *(p + i) << "; ";
    }
    std::cout << std::endl;

    // if change a value of a memory place;
    *(p + 5) = 2323232; // p is a pointer point to an address => when changing value of address - that address's value would be change too when using another one to manage the same address
    for (int i = 0; i < 10; i++)
    {
        *(p+i) *= 10; // tương đương a[i] = a[i] + 10;
        std::cout << "a[" << i << "] = " << *(p + i) << "; ";
    }
    std::cout << std::endl;

    // How about using element of p to print? p[i] : i = 0 -> 10
    // the result would be the same with arr[i] : i = 0 -> 10
    for (int i = 0; i < 10; i++)
    {
        *(p+i) *= 10; // tương đương a[i] = a[i] + 10;
        std::cout << "a[" << i << "] = " << p[i] << "; ";
    }

    return 0;
}