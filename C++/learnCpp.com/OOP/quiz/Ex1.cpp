#include <iostream>
#include <math.h>
#include <vector>
class Point2d
{
private:
    double m_x {};
    double m_y {};
public:
    //Point2d() = default;
    Point2d(const double& x = 0.0, const double& y = 0.0) : m_x {x}, m_y {y} {}
    void print() {
        std::cout << "Point2d(" << m_x << "," << m_y << ")" << std::endl;
    }
    void setX(const double& x) { m_x = x;}
    void setY(const double& y) { m_x = y;}
    double getX() { return m_x; }
    double getY() { return m_y; }
    // distanceTo is a member function
    double distanceTo(const Point2d& p1)
    {
        return sqrt((p1.m_x-m_x)*(p1.m_x-m_x) + (p1.m_y-m_y)*(p1.m_y-m_y));
    }

};

double distanceFrom(Point2d p1,Point2d p2)
{
    double tX1 = p1.getX();
    double tY1 = p1.getY();
    double tX2 = p2.getX();
    double tY2 = p2.getY();
    return sqrt( (tX1-tX2) * (tX1-tX2) + (tY1 - tY2)*(tY1 - tY2) );
}

int main()
{
    std::vector<int> n;
    Point2d first{};
    Point2d second{ 3.0, 4.0 };
    first.print();
    second.print();
    std::cout << first.distanceTo(second) << std::endl; // distanceTo is a member function
    std::cout << distanceFrom(first,second) << std::endl;
    return 0;
}