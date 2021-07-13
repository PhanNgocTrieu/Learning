#include "Stack.h"
#include <cassert>

Stack::Stack()
{
    mSize = 0;
    mCap = 1;
    mStudentList = new Student[mCap];
}
Stack::Stack(const int &cap)
{
    mCap = cap;
    mStudentList = new Student[cap];
    mSize = 0;
}
Stack::Stack(const Stack &sv)
{
    mSize = sv.mSize;
    mCap = sv.mCap;
    mStudentList = sv.mStudentList;
}
Stack::~Stack()
{
    //cout << "~Stack()" << endl;
    if (mStudentList)
    {
        delete[] mStudentList;
        mStudentList = nullptr;
    }
}
int Stack::Size()
{
    return mSize;
}
int Stack::getCap()
{
    return mCap;
}
void Stack::push_back(const Student &sv) // push last ele
{
    // allocated more memory when stack is full - no handling overflow
    // suppose that we can allocate more 10 memory spaces when stack is full
    if (isFull())
    {
        //cout << "Come here!" << endl;
        Student *save = mStudentList;
        //cout << "Old Address: " << save << endl;
        mCap = mCap + 10;
        mStudentList = new Student[mCap];
        //cout << "New Address: " << mStudentList << endl;
        //cout << "mSize: " << mSize << endl;
        for (int iRun = 0; iRun < mSize; iRun++)
        {
            mStudentList[iRun] = save[iRun];
            //cout << "Done " << iRun << endl;
        }
        mStudentList[mSize] = sv;
        mSize++;
        delete[] save;
        save = NULL;
    }
    else
    {
        //cout << "Come into Emty && Normal!" << endl;
        mStudentList[mSize] = sv;
        //cout << mStudentList[mSize] << endl;
        mSize++;
    }
}
void Stack::pop_back() // with deleting
{
    if (isEmpty())
    {
        cerr << "Underflow\nProgram Terminated\n";
        return;
    }
    else
    {
        mSize--;
    }
}
Student Stack::peek() // without deleting + take last elem
{    
    if (!isEmpty())
    {
        return mStudentList[mSize - 1];
    }
    else
    {
        throw "Invalid! Stack is empty";
    }     
}
bool Stack::isEmpty()
{
    return mSize == 0;
}
bool Stack::isFull()
{
    return mSize == mCap;
}
Student &Stack::operator[](int _idex)
{
    assert(_idex < mSize && _idex >= 0);
    return mStudentList[_idex];
}

void Stack::print()
{
    for (int idex = 0; idex < mSize; idex++)
    {
        cout << mStudentList[idex] << endl;
    }
}
