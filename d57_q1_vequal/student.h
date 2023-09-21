#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator==(const vector<T> &other) const
{
  if (other.size() != mSize)
    return false;
  for (i = 0; i < mSize; i++)
  {
    if (mData[i] != other[i])
      return false;
  }
  return true;
}

#endif
