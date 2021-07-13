#ifndef __STACK_H__
#define __STACK_H__

#include "Student.h"

class Stack
{
public:
    Stack();
    Stack(const int &_cap);
    Stack(const Stack &_st);
    ~Stack();
    int Size();
    int getCap();
    void push_back(const Student &); // push last elem
    void pop_back();                 // with deleting
    Student peek();                  // without deleting
    bool isEmpty();
    bool isFull();
    Student &operator[](int _idex);
    void print();
private:
    int mSize;
    int mCap;
    Student *mStudentList;
};

#endif