#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T &value, iterator a, iterator b, CP::list<T> &output)
{
  while (a != b)
  {
    if (*a == value)
    {
      node *x = new node(*a, output.mHeader->next->prev, output.mHeader->next);
      output.mHeader->next->prev = x;
      output.mHeader->next = x;
      output.mSize++;
      iterator it(a.ptr->next);
      a.ptr->prev->next = a.ptr->next;
      a.ptr->next->prev = a.ptr->prev;
      delete a.ptr;
      mSize--;
      a = it;
    }
    else
      a++;
  }
}

#endif
