#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

// DO NOT INCLUDE ANYTHING

template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first, typename std::set<T>::iterator last)
{
  // write your code ONLY here
  int cnt = 0;
  while (last != first)
  {
    cnt++;
    last--;
  }
  T *arr = new T[cnt]();
  for (int i = cnt - 1; i >= 0; i--)
  {
    arr[i] = *first;
    first++;
  }
  mData = arr;
  mSize = mCap = cnt;
}

#endif
