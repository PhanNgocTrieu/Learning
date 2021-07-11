#include <iostream>

class Simple
{
private:
    int m_nID{};
public:
    Simple(int nID) : m_nID { nID }
    {
        std::cout << "Constructor Simple " << nID << "\n";
    }
    ~Simple()
    {
        std::cout << "Destructor Simple " << m_nID << '\n';
    }
    int getID()
    {
        return m_nID;
    }
};

int main()
{
    //Allocate a Simple on the stack
    return 0;
}