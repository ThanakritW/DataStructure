#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::find(T k) const
{
  for (int i = 0; i < mSize; i++)
  {
    if (k == mData[i])
      return true;
  }
  return false;
}

template <typename T, typename Comp>
int CP::priority_queue<T, Comp>::find_level(T k) const
{

  int maxSize = 1;
  int level = 0;
  for (int i = mSize - 1; i >= 0; i--)
  {
    if (k == mData[i])
    {
      int target = i + 1;
      int level = 0;
      while (target != 1)
      {
        target >>= 1;
        level++;
      }
      return level;
    }
  }
  return -1;
}

#endif
