#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b)
{
  if (a == b)
    return a;
  iterator x = a, y = b;
  y--;
  while (b != a)
  {
    int tmp = *x;
    *x = *y;
    *y = tmp;
    x++;
    if (x == y)
      break;
    y--;
  }
  return a;
}

#endif
