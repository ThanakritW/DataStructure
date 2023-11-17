#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls)
{
  auto it = this->end().ptr->prev;
  for (auto &l : ls)
  {
    it->next = l.begin().ptr;
    l.begin().ptr->prev = it;
    it = l.end().ptr->prev;
    mSize += l.size();
    l.mHeader->prev = l.mHeader;
    l.mHeader->next = l.mHeader;
    l.mSize = 0;
  }
  it->next = mHeader;
  mHeader->prev = it;
}

#endif
