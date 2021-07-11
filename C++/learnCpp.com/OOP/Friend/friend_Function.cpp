#include <iostream>


class Accumulator;

namespace test{
    void reset(const Accumulator &accumulator);
}

class Accumulator
{
private:
    int m_value;
public:
    Accumulator() { m_value = 0; } 
    void add(int value) { m_value += value; }

    int getValue(){
        return m_value;
    }

    // Make non-friend reset() function
    //void nonfriend_reset(Accumulator&);

    // Make the reset() function a friend of this class
    friend void test::reset(const Accumulator &accumulator);
};

// reset() is now a friend of the Accumulator class
void test::reset(const Accumulator &accumulator) // this class is accessed from outside of class
{
    // And can access the private data of Accumulator objects
    std::cout << "From friend function: " << accumulator.m_value << std::endl;
}

 
int main()
{

    Accumulator acc;
    acc.add(2); // add 5 to the accumulator
    std::cout << "Get default value: " << acc.getValue() << std::endl;
    //acc.nonfriend_reset(acc);
    //std::cout << "after change: " << acc.getValue() << std::endl;
    std::cout << "Using namespace to access to nonfriend_reset(): " << acc.getValue() << std::endl;
    
    test::reset(acc);

    return 0;
}