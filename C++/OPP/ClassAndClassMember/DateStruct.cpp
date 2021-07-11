#include <iostream>

struct DateStruct
{
    int year{};
    int month{};
    int day{};
};

class DateClass
{
public:
    int m_year{};
    int m_month{};
    int m_day{};
    // DateClass(); // does not need to use
    // ~DateClass(); // does not need to use
    void Print()
    {
        std::cout << "Class: " << m_year << "/" << m_month << "/" << m_day << "\n";
    }
};


void print(const DateStruct &date)
{
    std::cout << "Struce: " << date.year << "/" << date.month << "/" << date.day << "\n";
}

int main()
{
    DateStruct today {2020,12,12}; // using uniform initialization
    DateClass Today {2020,12,22}; 
    today.day = 22; // use member selection operator to select a member of the struct
    Today.Print();
    print(today);
    

    return 0;
}