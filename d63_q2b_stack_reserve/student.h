#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const
{
    int sz = mCap - mSize;
    int osz = other.mCap - other.mSize;
    if (sz == osz)
        return 0;
    if (sz < osz)
        return -1;
    return 1;
}

#endif
