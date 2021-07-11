#include <iostream>
#include <vector>

int main()
{
    std::vector<__int32> vecInt32;
    std::vector<__int32>::iterator iter;

    //iter point to the begin of vecInt32
    iter = vecInt32.begin();

    //insert new element into vecInt32's container
    vecInt32.insert(iter, 10);
    for (auto i = vecInt32.begin(); i != vecInt32.end(); i++)
    {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
    //container = { 10 }

    iter = vecInt32.end();
    vecInt32.insert(iter, 20);

    for (auto i = vecInt32.begin(); i != vecInt32.end(); i++)
    {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
    //container = { 10, 20 }

    iter = vecInt32.begin() + 1;
    vecInt32.insert(iter, 15);

    //container = { 10, 15, 20 }

    for (auto i = vecInt32.begin(); i != vecInt32.end(); i++)
    {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

    // erase() like a pointer points to address of element
    vecInt32.erase(vecInt32.begin() + 1);
    for (auto i = vecInt32.begin(); i != vecInt32.end(); i++)
    {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
    
    std::vector<long long int> myvector;
    // set some content in the vector
    for (int i = 0; i<100; i++) 
        myvector.push_back(i);

    std::cout << "size: " << myvector.size() << std::endl;
    std::cout << "max_size: " << myvector.max_size() << std::endl; 
}