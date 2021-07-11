#include <iostream>

class Fraction
{
private:
    int m_numerator;
    int m_denominator;
public:
    Fraction(/* args */)
    {
        m_numerator = 2;
        m_denominator = 5; // this is a denominator;
    }
    int getNumerator()
    {
        return m_numerator;
    }

    int getDenominator()
    {
        return m_denominator;
    }
    double getValue()
    {
        return static_cast<double>(m_numerator) / m_denominator;
    }
};


int main()
{
    Fraction frac; // Since no arguments, call Fraction() default constructor

    std::cout << frac.getNumerator() << "/" << frac.getDenominator() << " = " << frac.getValue();
    return 0;
}