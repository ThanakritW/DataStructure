#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

// you can use this function
template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT, MappedT, CompareT>::shallowest_leaf(node *n)
{
  if (n->left == NULL and n->right == NULL)
    return -1;
  int mn = 1000000;
  if (n->left != NULL)
    mn = std::min(shallowest_leaf(n->left), mn);
  if (n->right != NULL)
    mn = std::min(shallowest_leaf(n->right), mn);
  return 1 + mn;
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT, MappedT, CompareT>::shallowest_leaf()
{
  // write your code here
  if (mRoot == NULL)
    return -1;
  return 1 + shallowest_leaf(mRoot);
}

#endif
