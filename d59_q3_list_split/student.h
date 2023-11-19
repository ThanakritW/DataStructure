#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
CP::list<T> CP::list<T>::split(iterator it, size_t pos)
{
  // write your code here
  CP::list<T> result;
  if (mSize == 0 || it == end())
    return result;
  if (it == begin())
  {
    std::swap(result.mHeader, mHeader);
    result.mSize = mSize;
    mSize = 0;
    return result;
  }

  result.mSize = mSize - pos;
  mSize = pos;

  result.mHeader->next = it.ptr;
  result.mHeader->prev = mHeader->prev;
  mHeader->prev->next = result.mHeader;
  mHeader->prev = it.ptr->prev;
  it.ptr->prev->next = mHeader;
  it.ptr->prev = result.mHeader;

  return result;
}

#endif
