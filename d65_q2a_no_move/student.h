#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
T &CP::vector_no_move<T>::operator[](int idx)
{
  auto it = std::upper_bound(aux.begin(), aux.end(), idx) - aux.begin();
  it--;
  // std::cout << it << ' ' << idx - aux[it] << '\n';
  return mData[it][idx - aux[it]];
}

template <typename T>
void CP::vector_no_move<T>::expand_hook()
{
  if (aux.empty())
    aux.push_back(0);
  aux.push_back(mCap);
}

#endif
