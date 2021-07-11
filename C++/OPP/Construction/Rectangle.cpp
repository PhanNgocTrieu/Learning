#include <iostream>

class Rectangle
{
private:
    double m_length{1.0};
    double m_width{1.0};
public:
    Rectangle(double length, double width)
    :
    m_length{ length },
    m_width{ width }
    {}

    Rectangle(double length) : m_length {length}
    {
        // m_length is intialized by the constructor
        // m_width's default value (1.0) is used
    }

    void print()
    {
        std::cout << "Length: " << m_length << ", width: " << m_width << "\n";
    }

};

int main()
{
    Rectangle x{2.2,12.2};
    x.print();

    Rectangle y{1.2f};
    y.print();
    return 0;
}