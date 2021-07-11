#include <iostream>
class B;
class C;

class A{
private:
    int x {0};
public:
    friend class B;
    class C;
    A(){
        std::cout << "From a!" << std::endl;

        B b;
        std::cout << "Value b: " << b.y << std::endl;
    }
};

class B {
private:
    // Constructors()
    // default
    int y {0}; //learncpp.cpp
public:
    // B();
    friend class C;
    B()
    {
        A a;
        std::cout << "From b!" << std::endl;
        std::cout << "Take value from a: " << a.x << std::endl;
    }
};

class C {
private:
    int z {0};
public:
    C()
    {
        A a;
        B b;
        std::cout << "From b!" << std::endl;
        std::cout << "Take value from a: " << a.x << std::endl;

        std::cout << "From b!" << std::endl;
        std::cout << "Take value from a: " << b.y << std::endl;
    }
};




int main()
{
    A a;
    B b;


    return 0;
}