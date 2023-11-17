#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T, typename Comp>
int CP::priority_queue<T, Comp>::height() const
{
  // write your code here
  if (mSize == 0)
    return -1;
  int x = mSize - 1;
  int cnt = 0;
  int accum = 2;
  while (x > 0)
  {
    x -= accum;
    cnt++;
    accum <<= 1;
  }
  return cnt;
}

#endif
