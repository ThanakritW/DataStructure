#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T, typename Comp>
T CP::priority_queue<T, Comp>::get_kth(size_t k) const
{
  if (k == 1)
    return mData[0];
  if (k == 2)
  {
    if (mLess(mData[1], mData[2]))
    {
      return mData[2];
    }
    return mData[1];
  }
  T mx, ans;
  if (mLess(mData[1], mData[2]))
  {
    ans = mData[2];
    mx = mData[1];
  }
  else
  {
    ans = mData[1];
    mx = mData[2];
  }
  for (int i = 3; i < 7; i++)
  {
    if (mLess(ans, mData[i]))
    {
      mx = ans;
      ans = mData[i];
    }
    else if (mLess(mx, mData[i]))
      mx = mData[i];
  }
  return mx;
}

#endif
