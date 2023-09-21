#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::insert(iterator position, iterator first, iterator last)
{
  int idx = position - this->begin();
  int range = last - first;
  T *arr = new T[mSize + (last - first)]();
  for (int i = 0; i < idx; i++)
    arr[i] = mData[i];

  for (int i = 0; i < range; i++)
    arr[idx + i] = *(first + i);

  for (int i = idx; i < mSize; i++)
    arr[i + range] = mData[i];

  delete[] mData;
  mData = arr;
  mSize = mCap = mSize + range;
}

#endif
