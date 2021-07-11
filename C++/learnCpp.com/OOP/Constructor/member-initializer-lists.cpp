#include <iostream>

class Something
{
private:
    int m_value1;
    double m_value2;
    char m_value3;
    const int m_value4;
    //const int m_value5;
 
public:
    // Normal way: we assign values like this below:
    // Something() {
    //     m_value1 = 1;
    //     m_value2 = 2;
    //     m_value3 = 3;
    // }


    // initializer list
    Something() : m_value1{ 1 }, m_value2{ 2.2 }, m_value3{ 'c' }, m_value4 {5} // Initialize our member variables
    {
        // This works because we’re allowed to initialize const variables (but not assign to them!).


        // No need for assignment here
        //m_value5 = 3;
    }

    Something(int va1, double va2, char var3, int var4) 
    : m_value1{ va1 }, m_value2{ va2 }, m_value3{ var3 }, m_value4 {var4} // Initialize our member variables
    {
    }
 
    void print()
    {
         std::cout << "Something(" << m_value1 << ", " << m_value2 << ", " << m_value3 << "," << m_value4 <<  ")\n";
    }
};


class A
{
public:
    A(int x) { std::cout << "A " << x << '\n'; }
};
 
class B
{
private:
    A m_a;
public:
    B(int y)
         : m_a{ y-1 } // call A(int) constructor to initialize member m_a
    {
        std::cout << "B " << y << '\n';
    }
};




int main()
{
    Something something{};
    Something something2{3,2.1,'T',232};
    something.print();
    something2.print();
    return 0;
}