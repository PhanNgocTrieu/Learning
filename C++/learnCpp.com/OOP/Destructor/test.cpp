#include <iostream>

class A {
    public:
        virtual void Greeting()
        {
            std::cout << "Hello from A!" << std::endl;
        }
};
class B : public A {
    public:
        void Greeting()
        {
            std::cout << "Hello From B!" << std::endl;
        }
};

int main()
{
    A *c = new A;
    c->Greeting(); // object of A just using member of class A


    B *b = new B; // 
    b->Greeting(); // prin from B -> because of overriding

    A *a = new B; // this one will use properties in memory of B
    a->Greeting(); // printing Hello from B - because of overriding

    //B *c = new A; // error - object off B could not using initialize in A memory space
    //c->Greeting();
    
    return 0;
}