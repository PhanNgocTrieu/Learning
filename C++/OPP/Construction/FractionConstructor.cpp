#include <iostream>
#include <cassert>

class Fraction
{
private:
    int m_numerator;
    int m_denominator;
public:
    Fraction()
    {
        m_numerator = 0;
        m_denominator = 1;
    }
    Fraction(int numerator, int denominator = 1)
    {
        assert(denominator != 0);
        m_numerator = numerator;
        m_denominator = denominator;        
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
        return static_cast<double>(m_numerator)/m_denominator;
    }
};

int main()
{
    Fraction FiveSix{5,6}; // List initialization, calls Fraction(int, int)
    Fraction SevenEleven{7,11}; // Direct initialization, calls Fraction(int, int)

    std::cout << "Five Six: " << FiveSix.getNumerator() << "/" << FiveSix.getDenominator() << " = " << FiveSix.getValue() << "\n";
    
    std::cout << "Five Six: " << SevenEleven.getNumerator() << "/" << SevenEleven.getDenominator() << " = " << SevenEleven.getValue() << "\n";
    return 0;
}