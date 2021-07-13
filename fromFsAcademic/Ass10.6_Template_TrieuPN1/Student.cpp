#include "Student.h"
#include <iostream>
using namespace std;


Student::Student() : mName{""}, mAge{0}, mClass{""} {}
Student::Student(const string &name, const int &age, const string &_class) : mName{name}, mAge{age}, mClass{_class} {}
Student::Student(const Student& _sv)
{
    mName = _sv.mName;
    mAge = _sv.mAge;
    mClass = _sv.mClass;
}
void Student::setName(const string &name)
{
    mName = name;
}
Student::~Student()
{
    //cout << "~Student()" << endl;
}
void Student::setAge(const int &age)
{
    mAge = age;
}
void Student::setClass(const string &_class)
{
    mClass = _class;
}
string Student::getName() const
{
    return mName;
}
int Student::getAge() const
{
    return mAge;
}
string Student::getClass() const
{
    return mClass;
}
ostream &operator<<(ostream &os, Student obj)
{
    os << "Name: " << obj.mName << " - Age: " << obj.mAge << " -- Class: " << obj.mClass;
    return os;
}
