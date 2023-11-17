#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const
{
  // write your code here
  std::vector<std::vector<T>> large;
  int ex = (int)mSize % (int)k;
  int sz = (int)mSize / (int)k;
  int idx = mSize - 1;
  for (int i = 0; i < k; i++)
  {
    std::vector<T> small;
    for (int j = 0; j < sz; j++)
    {
      small.push_back(mData[idx]);
      idx--;
    }
    if (i < ex)
    {
      small.push_back(mData[idx]);
      idx--;
    }
    large.push_back(small);
  }
  return large;
}
#endif
