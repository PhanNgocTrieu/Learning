#include <iostream>
using namespace std;

class Accumulator;

namespace test {
    void reset(Accumulator& accumulator);
}

class Accumulator
{
private:
    int m_value;
public:
    Accumulator() { m_value = 0; }
    void add(int value) { m_value += value; }

    int getValue() {
        return m_value;
    }
    friend void test::reset(Accumulator& accumulator);
};

void test::reset(Accumulator& accumulator) {
    accumulator.m_value = 5; // we can change private value
    cout << "From friend function: " << accumulator.m_value << endl;
};

int main()
{
    Accumulator acc;
    test::reset(acc);
    cout << "get value: " << acc.getValue() << endl;
}
