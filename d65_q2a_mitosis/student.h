#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{
    int idx = mSize + b - a;
    expand(mSize + b - a + 1);
    int cnt = 0;
    for (int i = mSize - 1; i >= 0; i--)
    {
        // std::cout << mData[i] << ' ';
        mData[idx] = mData[i];
        idx--;
        if (cnt >= a and cnt <= b)
        {
            mData[idx] = mData[i];
            idx--;
        }
        cnt++;
    }
    mSize = mSize + b - a + 1;
}

#endif