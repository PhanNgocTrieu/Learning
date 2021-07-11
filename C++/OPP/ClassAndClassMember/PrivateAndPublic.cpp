#include <iostream>

class DateClass
{
    // private by default, can only be accessed by other members

public:
    int m_year; // pucblic already
    int m_month;
    int m_day;

    void print()
    {
        std::cout << m_year << "/" << m_month << "/" << m_day << "\n";
    }
};


class DateClass_Valid
{
private:
    int m_year;
    int m_month;
    int m_day;
public:
    void SetDate(int year, int month, int day)
    {
        m_year = year;
        m_month = month;
        m_day = day;
    }
    
    void Print()
    {
        std::cout << m_year << "/" << m_month << "/" << m_day << "\n";
    }
};



/// class using for accessing controls work on a per-class basis
class Date_Basis
{
    int m_year;
    int m_month;
    int m_day;

public:
    void SetDate(int year, int month, int day)
    {
        m_day = day;
        m_month = month;
        m_year = year;
    }

    void print()
    {
        std::cout << m_year << "/" << m_month << "/" << m_day << "\n";
    }
    // we can change the values directly through this member function
    void copyForm(const Date_Basis &d)
    { 
        
        m_day = d.m_day;
        m_month = d.m_month;
        m_year = d.m_year;
    }
};


int main()
{
    DateClass date;
    date.m_year = 2020; // error -> now it is oke due to the class is public already
    date.m_month = 12; // error
    date.m_day = 22; // error


    DateClass_Valid today;
    today.SetDate(2020,12,22);
    today.Print(); 
    date.print();
    date.print();


    Date_Basis nextdate;
    Date_Basis copyDate;
    nextdate.SetDate(2020,12,23);
    copyDate.copyForm(nextdate);

    std::cout << "This is print of the next day: ";
    nextdate.print();
    std::cout << "This is print of copy date of next day: ";
    copyDate.print();
    
    return 0;
}