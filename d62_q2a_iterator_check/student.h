#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::valid_iterator(CP::vector<T>::iterator it) const
{
    T *address = &mData[0];
    if(it < address)
      return false;
    if(it >= address + mSize)
      return false;
    return true;
}

#endif
