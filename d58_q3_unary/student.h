#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT, MappedT, CompareT>::process(node *ptr) const
{
  // you may write additional code here
  if (ptr->left == NULL and ptr->right == NULL)
    return 0;
  if (ptr->left == NULL)
    return 1 + process(ptr->right);
  if (ptr->right == NULL)
    return 1 + process(ptr->left);
  return process(ptr->right) + process(ptr->left);
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT, MappedT, CompareT>::count_unary() const
{
  if (mRoot == NULL)
    return 0;
  return process(mRoot);
}

#endif
