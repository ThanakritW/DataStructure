#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <cassert>
#include <algorithm>

template <typename T>
void CP::queue<T>::reverse(int a, int b)
{
  if (a == b)
    return;
  int sz = b - a;
  int st = mFront + a;
  for (int i = 0; i <= sz / 2; i++)
  {
    std::swap(mData[(st + i) % mCap], mData[(st + sz - i) % mCap]);
  }
}

#endif
