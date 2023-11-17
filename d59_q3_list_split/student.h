void splitList(list<T> &list1, list<T> &list2)
{
    int size = this->mSize;
    size = (size + 1) / 2;
    iterator it = mHeader;
    for (int i = 0; i <= size; i++)
        it = it.ptr->next;
    node *pt = it.ptr->prev->next;
    list1.mHeader->prev->next = mHeader->next;
    mHeader->next->prev = list1.mHeader->prev;
    list1.mHeader->prev = it.ptr->prev;
    it.ptr->prev->next = list1.mHeader;
    list1.mSize += size;
    list2.mHeader->prev->next = pt;
    it.ptr->prev = list2.mHeader->prev;
    list2.mHeader->prev = mHeader->prev;
    mHeader->prev->next = list2.mHeader;
    list2.mSize += mSize - size;
    mHeader->next = mHeader;
    mHeader->prev = mHeader;
    mSize = 0;
}
