#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m)
{
  if (a > b)
  {
    iterator temp = a;
    a = b;
    b = temp;
  }
  if (m < 1)
    return false;
  if (a + m - 1 >= b)
    return false;
  if (a < begin() or a + m - 1 >= end())
    return false;
  if (b < begin() or b + m - 1 >= end())
    return false;
  for (size_t i = 0; i < m; i++)
  {
    T temp = *(a + i);
    *(a + i) = *(b + i);
    *(b + i) = temp;
  }
  return true;
}

#endif
