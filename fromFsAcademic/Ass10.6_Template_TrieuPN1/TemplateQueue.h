#ifndef __TEMPLATEQUEUE_H__
#define __TEMPLATEQUEUE_H__
#include <cassert>
template<class T>
class QUEUE
{
public:
    QUEUE();
    QUEUE(const int &_cap);
    QUEUE(const QUEUE &_Que);
    ~QUEUE();
    int Size() const;
    void Enqueue(const T &_sv);
    void Dequeue();
    T Peek();
    bool isEmpty();
    bool isFull();
    void print();
    T &operator[](int _idex);

private:
    int mCap;
    int mSize;
    T *mStudentList;
};

template<class T>
QUEUE<T>::QUEUE()
{
    mCap = 10;
    mSize = 0;
    mStudentList = new T[mCap];
}

template<class T>
QUEUE<T>::QUEUE(const int& _cap)
{
    assert(_cap > 0 && _cap <= 10);
    mCap = _cap;
    mSize = 0;
    mStudentList = new T[mCap];
}

template<class T>
QUEUE<T>::QUEUE(const QUEUE &_Que)
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

template<class T>
QUEUE<T>::~QUEUE()
{
    //cout << "~QUEUE()" << endl;
    if (mStudentList)
    {
        delete[] mStudentList;
        mStudentList = nullptr;
    }
}

template<class T>
int QUEUE<T>::Size() const
{
    return mSize;
}

template<class T>
void QUEUE<T>::Enqueue(const T& t)
{
    if (isFull())
    {
        throw "Queue is full now!";
    }
    else
    {
        mStudentList[mSize] = t;
        mSize++;
    }
}

template<class T>
void QUEUE<T>::Dequeue()
{
    if (isEmpty())
    {
        throw "Queue is Empty!";
    }
    else
    {
        for (int iRunS = 0; iRunS < mSize - 1; iRunS++)
        {
            mStudentList[iRunS] = mStudentList[iRunS + 1];
        }
        mSize--;
    }
}

template<class T>
bool QUEUE<T>::isFull()
{
    if (mSize == mCap)
        return true;
    return false;
}

template<class T>
bool QUEUE<T>::isEmpty()
{
    if (mSize == 0)
        return true;
    return false;
}

template<class T>
T& QUEUE<T>::operator[](int _idex)
{
    return mStudentList[_idex];
}


template<class T>
void QUEUE<T>::print()
{
    for (int idex = 0; idex < mSize; idex++)
    {
        cout << mStudentList[idex] << " ";
    }
}


#endif