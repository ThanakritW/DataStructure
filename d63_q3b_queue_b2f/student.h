#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::back_to_front()
{
  if (mSize == 0)
    return;
  if (mFront != 0)
  {
    mFront--;
    mData[mFront] = mData[(mFront + mSize) % mCap];
  }
  else
  {
    mFront = mCap - 1;
    mData[mFront] = mData[mSize - 1];
  }
}

#endif
