#include <cassert>
#include <iostream>

class Fraction
{
private:
    int m_numerator;
    int m_denominator;
 
public:
    // Default constructor => Reducing Constructors
    Fraction(int numerator=0, int denominator=1)
    {
        assert(denominator != 0);
        m_numerator = numerator;
        m_denominator = denominator;
    }
 
    int getNumerator() { return m_numerator; }
    int getDenominator() { return m_denominator; }
    double getValue() { return static_cast<double>(m_numerator) / m_denominator; }
};

int main()
{

    Fraction _f; // Default - call Fraction(0,1);
    Fraction f_0{}; // Default - call Fraction(0,1);
    Fraction f{ 5 }; // call Fraction (5,1);
    Fraction f_2{3, 6}; // call Fraction (3,6);
    

    std::cout << "_f - value: " << _f.getValue() << std::endl;
    std::cout << "f_0 - value: " << f_0.getValue() << std::endl;
    std::cout << "f - value: " << f.getValue() << std::endl;
    std::cout << "f_2 - value: " << f_2.getValue() << std::endl;


    Fraction f_3{6,0}; // call Fraction (6,0) => error!
    std::cout << "f_3 - value: " << f_3.getValue() << std::endl;


    return 0;
}