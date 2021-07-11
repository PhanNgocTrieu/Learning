#include <iostream>

class SomeThing_1
{
private:
    int m_value1;
    int m_value2;
    int m_value3;
public:
    void setValue(int value) { m_value1 = value;}
    int getvalue() { return m_value1; }
};

class SomeThing_2
{
private:
    int m_value[3];
public:
    void setValue(int value) { m_value[0] = value; }
    int getValue() { return m_value[0]; }
};


int main()
{
    SomeThing_1 something1;
    SomeThing_2 something2;

    something1.setValue(2);
    something2.setValue(5);
    
    std::cout << "Something 1: " << something1.getvalue() << "\n";
    std::cout << "Something 2: " << something2.getValue() << "\n";
}
