// memmber of class are private default
// member of struct are publec default

#include <iostream>

// class Test {
//     int x; // this is private
// };

struct Test {
    int x; // This is public
};
int main()
{
    Test t; //because x in class is private so this call struct Test
    t.x = 20; //in class this will be failed

    std::cout << t.x << std::endl;
    return 0; 
}