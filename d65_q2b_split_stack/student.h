#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::split_stack(int k) const
{
  std::vector<std::vector<T>> result;
  int st = ((int)mSize) % k;
  for (int i = 0; i < k; i++)
  {
    int idx = mSize - 1 - i;
    std::vector<T> temp, temp2;
    while (idx >= 0)
    {
      temp.push_back(mData[idx]);
      idx -= k;
    }
    for (int i = temp.size() - 1; i >= 0; i--)
      temp2.push_back(temp[i]);
    result.push_back(temp2);
  }
  return result;
}

#endif
