#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::stack<T>::multi_pop(size_t K)
{
  if (mSize < K)
    K = mSize;
  for (int i = 0; i < K; i++)
  {
    pop();
  }
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K)
{
  // write your code here
  //
  // don't forget to return an std::stack
  std::stack<T> t1, t2;
  if (mSize < K)
    K = mSize;
  for (int i = 0; i < K; i++)
  {
    t1.push(top());
    pop();
  }
  while (!t1.empty())
  {
    t2.push(t1.top());
    t1.pop();
  }
  return t2;
}

#endif
