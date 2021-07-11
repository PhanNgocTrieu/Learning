#include <iostream>


class Point3d
{
private:
    int m_x;
    int m_y;
    int m_z;
public:
    void setValue(int x, int y, int z)
    {
        m_x = x;
        m_y = y;
        m_z = z;
    }
    bool isEqual(const Point3d p)
    {
        if (m_x == p.m_x && m_y == p.m_y && m_z == p.m_z)
        {
            return true;
        }
        return false;
    }
    void print()                  
    {
        std::cout << "<" << m_x << "," << m_y << "," << m_z << ">";
    }
};

int main()
{
    Point3d p1;
    p1.setValue(1,2,3);
    p1.print();
    std::cout << "\n";

    Point3d p2;
    p2.setValue(1,2,3);
    p2.print();
    std::cout << "\n";

    if (p1.isEqual(p2))
    {
        std::cout << "point 1 and point 2 are equal! \n";
    }
    else
    {
        std::cout << "point 1 and poin 2 are not equal! \n";
    }
    

    Point3d p3;
    p3.setValue(1,3,5);
    p3.print();
    std::cout << "\n";
    if (p3.isEqual(p1))
    {
        std::cout << "point 3 and point 2 are equal! \n";
    }
    else
    {
        std::cout << "point 3 and point 2 are not equal! \n";
    }
    
    
    

    return 0;
}