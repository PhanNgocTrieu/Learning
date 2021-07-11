#include <iostream>
#include <string>

class Employee
{
private:
    int m_id {};
    std::string m_name {};

public:
    Employee(int id = 0, const std::string &name = "") : m_id {id}, m_name {name}
    {
        std::cout << "Employee: " << m_name << " created.\n";
    }

    // using a delegating constructor to minimize redundant code

    Employee(const std::string &name) : Employee {0, name}
    {
    }
};

int main()
{
    Employee Emp1(1,"John");
    Employee Emp2("Henry");


    return 0;
}