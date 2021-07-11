#include <iostream>
using namespace std;

class Employee{
    public:
        virtual void raiseSalary()
        {
            // common raise salary code
        }

        virtual void promote()
        {
            // common promoe code
        }
};

class Manager : public Employee
{
    virtual void raiseSalary()
    {
        // Mannager specific raise salary code,
        // may contain increment of manager specific incentives
    }

    virtual void promote()
    {
        // Manager specific promote
    }
};


void globalRaiseSalary(Employee* emp[], int n)
{
    for (int i = 0; i < n; i++)
    {
        //Polymorphic Call: calls raiseSalary()
        //according to the actual object, not
        //according to the type of pointer
        emp[i] -> raiseSalary();
    }
    
}
int main()
{
    return 0;
}