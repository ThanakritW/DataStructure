#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <vector>
#include <algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int, T>> data)
{
  std::vector<std::pair<int, T>> sorted;
  for (size_t i = 0; i < data.size(); i++)
    sorted.push_back(data[i]);
  std::sort(sorted.begin(), sorted.end());
  size_t newSize = mSize + data.size();
  T *arr = new T[newSize]();
  int cnt = 0;
  for (int i = 0; i < mSize; i++)
  {
    if (i == sorted[cnt].first)
    {
      arr[i + cnt] = sorted[cnt].second;
      cnt++;
    }
    arr[i + cnt] = mData[i];
  }
  if (cnt != sorted.size())
    arr[newSize - 1] = sorted[cnt].second;
  delete[] mData;
  mData = arr;
  mSize = mCap = newSize;
}
#endif
