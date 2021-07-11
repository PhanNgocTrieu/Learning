/*
// Bài tập
// Bạn hãy khai báo lớp Circle trong file Circle.cpp với thông tin giống như sau:

Class Circle
private: radius (double)
public: Circle(radius: double), getArea(): double, getCircumference() : double


// Giải thích:

// radius là thuộc tính chỉ bán kính của đường tròn
// Circle(radius: int) là phương thức khởi tạo có tham số dùng để gán giá trị cho thuộc tính radius
// getArea() và getCircumference() là hai phương thức trả về diện tích và chu vi của hình tròn với pi (π) = 3.14.
*/

#include <iostream>
using namespace std;

#define PI 3.14

class Circle {
private:
    double radius;
public:
    Circle()
    {
        this->radius = 0;
    }
    Circle(double radius)
    {
        this->radius = radius;
    }
    void enterRadius()
    {
        std::cout << "Enter radius: ";
        std::cin >> radius;
    }
    double getArea()
    {
        return this->radius*this->radius*PI;
    }
    double getCircumference()
    {
        return 2*PI*this->radius;
    }
};

int main() {
    Circle c(7);
    cout << c.getArea() << endl;
    cout << c.getCircumference() << endl;

    Circle* c_ptr = new Circle; // allocated memory in heap - storing dynamic memory
    c_ptr->enterRadius();
    cout << c_ptr->getArea() << endl;
    cout << c_ptr->getCircumference() << endl;
    return 0;
}