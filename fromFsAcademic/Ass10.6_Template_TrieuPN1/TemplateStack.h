#ifndef __TEMPLATESTACK_H__
#define __TEMPLATESTACK_H__

#include <cassert>
#include <iostream>
using namespace std;
template<class T>
class STACK {
public:
    STACK();
    STACK(const int &_cap);
    STACK(const STACK &_st);
    ~STACK();
    int Size();
    int getCap();
    void push_back(const T &); // push last elem
    void pop_back();                 // with deleting
    T peek();                  // without deleting
    bool isEmpty();
    bool isFull();
    T &operator[](int _idex);
    void print();
private:
    int mSize;
    int mCap;
    T *mStudentList;
};


template<class T>
STACK<T>::STACK()
{
    mSize = 0;
    mCap = 1;
    mStudentList = new T[mCap];
}

template<class T>
STACK<T>::STACK(const int &_cap)
{
    mCap = _cap;
    mSize = 0;
    mStudentList = new T[mCap];
}

template<class T>
STACK<T>::STACK(const STACK& st)
{
    mCap = st.mCap;
    mSize = st.mSize;
    mStudentList = st.mStudentList;
}

template<class T>
STACK<T>::~STACK()
{
    //cout << "~STACK" << endl;
    delete[] mStudentList;
    mStudentList = NULL;
}

template<class T>
int STACK<T>::Size()
{
    return mSize;
}

template<class T>
int STACK<T>::getCap()
{
    return mCap;
}

template<class T>
void STACK<T>::push_back(const T & t) // push last ele
{
    if (isFull())
    {
        //cout << "Come here!" << endl;
        T *save = mStudentList;
        //cout << "Old Address: " << save << endl;
        mCap = mCap + 10;
        mStudentList = new T[mCap];
        //cout << "New Address: " << mStudentList << endl;
        //cout << "mSize: " << mSize << endl;
        for (int iRun = 0; iRun < mSize; iRun++)
        {
            mStudentList[iRun] = save[iRun];
            //cout << "Done " << iRun << endl;
        }
        mStudentList[mSize] = t;
        mSize++;
        delete[] save;
        save = NULL;
    }
    else
    {
        //cout << "Come into Emty && Normal!" << endl;
        mStudentList[mSize] = t;
        //cout << mStudentList[mSize] << endl;
        mSize++;
    }
}

template<class T>
void STACK<T>::pop_back()           // with deleting
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

template<class T>
T STACK<T>::peek()                  // without deleting
{
    if (isEmpty())
    {
        throw "Invalid! Stack is empty";
    }
    else
    {
        return mStudentList[mSize - 1];
    } 
}

template<class T>
bool STACK<T>::isEmpty()
{
    return mSize == 0;
}

template<class T>
bool STACK<T>::isFull()
{
    return (mSize == mCap);
}

template<class T>
T& STACK<T>::operator[](int _idex)
{
    assert(_idex < mSize && _idex >= 0);
    return mStudentList[_idex];
}

template<class T>
void STACK<T>::print()
{
    for (int idex = 0; idex < mSize; idex++)
    {
        cout << mStudentList[idex];
    }
}

#endif