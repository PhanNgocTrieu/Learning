#include <iostream>
#include <cassert>

class Fraction
{
private:
    // int var_numerator;
    // int var_denominator;
    int var_numerator {2};
    int var_denominator {1};
public:
    Fraction() // default fraction
    {
        var_numerator = 0;
        var_denominator = 1; // denominator have to be different from 0.
    }



    // Constructor with two parameters, one parameter having a default value
    Fraction(const int& var_num, const int& var_den) : var_numerator{var_num}, var_denominator{var_den}{
        assert(var_den != 0);
    }

    // Copy Constructors:
    Fraction(const Fraction& f) : var_numerator {f.var_numerator}, var_denominator{f.var_denominator}
    {

    }

    int getNumberator() {return var_numerator;}
    int getDenominator() {return var_denominator;}
    double getValue()
    {
        return static_cast<double>(var_numerator)/var_denominator;
    }
};

int main()
{
    /*
    If your class has no constructors, C++ will automatically generate a public default constructor for you. 
    This is sometimes called an implicit constructor (or implicitly generated constructor).
    */



    /* *********************** DEFAULT CONSTRUCTOR *****************************/
    Fraction f; // this was created by default constructor -> no argurments -> call Fraction();
    std::cout << "" << std::endl;
    //std::cout << "Numerator: " << f.getNumberator() << std::endl;
    //std::cout << "Denominato: " << f.getDenominator() << std::endl;
    std::cout << f.getNumberator() << "/" << f.getDenominator() << " -> Value of Fraction: " << f.getValue() << std::endl;
    std::cout << std::endl;
    
    
    /* *********************** PARAMETERS CONSTRUCTORS **************************/
    Fraction f2(3,0); // call Fraction(int, int) - Direct initialization
    Fraction f3{3,2}; // call list initialization - Fraction(int, int);
    // Fraction f4{5}; -- Some IDE will accept this initialization - call Fraction (int, int) with denominator is default value 1;
    std::cout << "Parameters Constructions" << std::endl;
    std::cout << f2.getNumberator() << "/" << f2.getDenominator() << " -> Value of Fraction: " << f2.getValue() << std::endl;
    std::cout << std::endl;
    


/* *********************** PARAMETERS CONSTRUCTORS **************************/
    Fraction f4 = f3;
    std::cout << "Copy Constructions" << std::endl;
    std::cout << f2.getNumberator() << "/" << f2.getDenominator() << " -> Value of Fraction: " << f2.getValue() << std::endl;
    std::cout << std::endl;



    return 0;
}