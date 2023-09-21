#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <unordered_map>

// you can include any other file here
// you are allow to use any data structure

template <typename T>
void CP::vector<T>::uniq()
{
  std::unordered_map<T, int> check;
  CP::vector<T> u;
  for (int i = 0; i < mSize; i++)
  {
    if (check[mData[i]] == 0)
    {
      check[mData[i]] = 1;
      u.push_back(mData[i]);
    }
  }
  *this = u;
}

#endif
