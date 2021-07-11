#include <iostream>
#include <sstream>

int main()
{
    std::stringstream ss;
    ss << "Hello!";
    //ss << "This is my";
    std::cout << ss.str();

    ss.str(""); //erase the buffer
    ss.clear(); //erase and reset error flags
    

    // this will print nothing because we already erased
    std::cout << ss.str();
}