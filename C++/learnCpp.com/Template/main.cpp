#include <iostream>
#include "Cent.h"


template <class T>
T average(T *array, int length)
{
    T sum(0);
    for (int count{ 0 }; count < length; ++count)
        sum += array[count];
 
    sum /= length;
    return sum;
}

double average(double *array, double length)
{
    double sum(0);
    for (int count{ 0 }; count < length; ++count)
        sum += array[count];
 
    sum /= length;
    return sum;
}

int main()
{
    Cents array2[]{ Cents(5), Cents(10), Cents(15), Cents(14) };
    double array3[]{ double(5), double(10), double(15), double(14) };
    std::cout << average(array2, 4) << '\n';
    std::cout << average(array3, 4) << '\n';
 
    
    return 0;
}