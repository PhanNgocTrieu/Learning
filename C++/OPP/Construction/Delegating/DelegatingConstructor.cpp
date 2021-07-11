#include <iostream>

class Foo
{
    private:
        int m_value {};
    public:
        Foo(){
            std::cout << "value: ";
        }
        Foo(int value) : Foo {} // use Foo() default constructor to do A
        {
            m_value = value;
            std::cout << m_value;
        }
};

int main()
{
    Foo f(3);
    return 0;
}