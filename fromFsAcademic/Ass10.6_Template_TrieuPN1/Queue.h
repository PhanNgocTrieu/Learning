#ifndef __QUEUE_H__
#define __QUEUE_H__

#include "Student.h"

class Queue
{
public:
    Queue();
    Queue(const int &_cap);
    Queue(const Queue &_Que);
    ~Queue();
    void Enqueue(const Student &_sv);
    void Dequeue();
    Student Peek();
    bool isEmpty();
    bool isFull();
    void printQueue();
    Student &operator[](int _idex);

private:
    int mCap;
    int mSize;
    Student *mStudentList;
};

#endif