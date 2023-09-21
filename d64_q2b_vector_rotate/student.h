#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k)
{
  // write your code here
  T *arr = new T[mSize]();
  size_t idx = 0;
  for (iterator i = begin(); i < first; i++)
    arr[idx++] = *i;
  for (iterator i = first + k; i < last; i++)
  {
    arr[idx++] = *i;
  }
  for (iterator i = first; i < first + k; i++)
  {
    arr[idx++] = *i;
  }
  for (iterator i = last; i < end(); i++)
  {
    arr[idx++] = *i;
  }
  delete[] mData;
  mData = arr;
}

#endif
