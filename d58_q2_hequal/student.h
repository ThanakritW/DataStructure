#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <set>
#include <vector>
#include <algorithm>

template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::operator==(const CP::priority_queue<T, Comp> &other) const
{
  if (mSize != other.mSize)
    return false;
  CP::priority_queue<T, Comp> a(*this), b(other);
  for (int i = 0; i < mSize; i++)
  {
    a.push(mData[i]);
    b.push(other.mData[i]);
  }
  while (!a.empty())
  {
    if (a.top() != b.top())
      return false;
    a.pop();
    b.pop();
  }
  return true;
}

#endif
