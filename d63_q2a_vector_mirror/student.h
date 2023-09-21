#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror()
{
  size_t newSize = mSize * 2;
  T *arr = new T[newSize]();
  for (size_t i = 0; i < mSize; i++)
  {
    arr[i] = arr[newSize - i - 1] = mData[i];
  }
  delete[] mData;
  mData = arr;
  mCap = mSize = newSize;
}

#endif
