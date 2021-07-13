#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <iostream>
using namespace std;
class Student : public exception
{
    private:
        string mName;
        int mAge;
        string mClass;
    public:
        Student();
        Student(const string&, const int&, const string&);
        Student(const Student&);
        ~Student();
        void setName(const string&);
        void setAge(const int&);
        void setClass(const string&);
        string getName() const;
        int getAge() const;
        string getClass() const;
        
        friend ostream& operator<<(ostream& os, Student obj);
};

#endif