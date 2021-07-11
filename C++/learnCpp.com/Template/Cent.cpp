#include <iostream>
#include "Cent.h"
using namespace std;



Cents::Cents(int cents)
    : m_cents{ cents }
{
}

Cents& Cents::operator+=(const Cents &cents)
{
    m_cents += cents.m_cents;
    return *this;
}

Cents& Cents::operator/=(int value)
{
    m_cents /= value;
    return *this;
}


bool operator>(const Cents &c1, const Cents &c2)
{
    return (c1.m_cents > c2.m_cents);
}

std::ostream& operator<< (std::ostream &out, const Cents &cents)
{
    out << cents.m_cents << " cents ";
    return out;
}
