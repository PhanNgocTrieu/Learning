#include <iostream>
#include <string>
class Ball
{
private:
    std::string m_color {};
    double m_radius {};
public:
    Ball(const std::string &color = "black", double radius = 10.0)
    {
        m_color = color;
        m_radius = radius;
    }
    //Ball(std::string color) { m_color = color; }
    Ball(double radius) {
        m_color = "black";
        m_radius = radius; }
   
    void print()
    {
        std::cout << "Color: " << m_color << ", Radius: " << m_radius << "\n";
    }
};

int main()            
{
    Ball def{};
    def.print();

    Ball blue {"Blue"};
    blue.print();

    Ball Twenty {20.0};
    Twenty.print();


    Ball blueTwenty{"Blue", 20.0};
    blueTwenty.print();

    

    return 0;
}