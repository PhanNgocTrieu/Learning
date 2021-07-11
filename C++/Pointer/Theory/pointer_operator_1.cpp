#include <iostream>

int main(int argc, char** argv) {
    int count = 100; //biến có giá trị 100
    int *m = &count;  // biến con trỏ m là biến lưu địa chỉ của count
    // m -> &count

    std::cout << "Address of Count = " << &count << std::endl;
    std::cout << "Value of Count = " << count << std::endl;

    // m là biến lưu địa chỉ:
    std::cout << "Address of pointer m = " << m << std::endl;
    // con trỏ -> địa chỉ == giá trị
    std::cout << "Value of pointer m point to = " << *m << std::endl;
    
    // gán giá trị p = giá trị của m;
    int p = *m;
    std::cout << "value of p = " << p << std::endl;
    // pointer x point to address of m
    int *x = m;
    std::cout << "Address of x = " << x << std::endl;
    std::cout << "Value of x = " << *x << std::endl;

    // change value at the address x:
    *x = 15;
    std::cout << "Value of m = " << *m << std::endl;
    // Why?
    // When pointer x -> address of count <- m -- both of them point to the same address
    // so when value of address of memory was change -> another pointer point to the same address would be changed too  

    return 0;
}