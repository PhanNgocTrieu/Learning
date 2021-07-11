#ifndef __CENT_H__
#define __CENT_H__

#include <iostream>
#include "Cent.h"
using namespace std;


class Cents
{
private:
    int m_cents;
public:
    Cents(int cents);
 
    friend bool operator>(const Cents &c1, const Cents &c2);
 
    friend std::ostream& operator<< (std::ostream &out, const Cents &cents);
 
    Cents& operator+=(const Cents &cents);
 
    Cents& operator/=(int value);
};


#endif