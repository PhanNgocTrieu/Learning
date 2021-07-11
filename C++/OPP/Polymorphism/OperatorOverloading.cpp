#include <iostream>
using namespace std;

class Complex{
    private:
        int real,imag;
    public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    //This is automatically called when '+' is used
    //with between two Complex objects

    Complex operator +(Complex const &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;

        return res;
    }

    void Print()
    {
        cout << real << " + i" << imag << endl;
    }
};

int main()
{
    Complex c1(10,5), c2(2,34);
    Complex res = c1 + c2; // this call  "operator+" 
    res.Print(); 

    return 0;
}