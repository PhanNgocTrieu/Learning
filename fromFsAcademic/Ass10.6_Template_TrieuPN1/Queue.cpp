#include "Queue.h"
#include <cassert>

Queue::Queue()
{
    mSize = 0;
    mCap = 10;
    mStudentList = new Student[mCap];
}
Queue::Queue(const int &_cap)
{
    assert(_cap <= 10);
    mCap = _cap;
    mSize = 0;
    mStudentList = new Student[mCap];
}
Queue::Queue(const Queue &_Que)
{
    if (_Que.mSize <= 10)
    {
        mCap = 10;
        mSize = _Que.mSize;
        mStudentList = _Que.mStudentList;
    }
    else{
        // just coppy data from idex 0 -> 10
        for (int idex = 0; idex < 10; idex++)
        {
            mStudentList[idex] = _Que.mStudentList[idex];
        }

    }
}
Queue::~Queue()
{
    //cout << "~Queue()" << endl;
    if (mStudentList)
    {
        delete[] mStudentList;
        mStudentList = nullptr;
    }
}
void Queue::Enqueue(const Student &_sv)
{
    if (isFull())
    {
        throw "Queue is full now!\n";
    }
    else
    {
        mStudentList[mSize] = _sv;
        mSize++;
    }
}
void Queue::Dequeue()
{
    if (isEmpty())
    {
        return;
    }
    else
    {
        if (mSize == 1)
        {
            delete[] mStudentList;
            mStudentList = NULL;
            mStudentList = new Student[mCap];
            return;
        }
        for (int iRunS = 0; iRunS < mSize - 1; iRunS++)
        {
            mStudentList[iRunS] = mStudentList[iRunS + 1];
        }
        mSize--;
        // delete save;
        // save = NULL;
    }
}
Student Queue::Peek()
{
    if (isEmpty())
    {
        throw "Queue is Empty!";
    }
    return mStudentList[0];
}
bool Queue::isEmpty()
{
    if (mSize == 0)
        return true;
    return false;
}
bool Queue::isFull()
{
    return (mSize == mCap);
}
void Queue::printQueue()
{
    for (int idex = 0; idex < mSize; idex++)
    {
        cout << mStudentList[idex] << endl;
    }
}
Student &Queue::operator[](int _idex)
{
    return mStudentList[_idex];
}
