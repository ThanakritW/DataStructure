#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

// you can modify and use this function
template <typename KeyT,
          typename MappedT,
          typename CompareT>
void CP::map_bst<KeyT, MappedT, CompareT>::my_recur(node *n, size_t level, size_t tmp, std::vector<KeyT> &v)
{
  // you MAY need to use this function
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
std::vector<KeyT> CP::map_bst<KeyT, MappedT, CompareT>::at_level(size_t level)
{
  std::queue<node *> q;
  std::vector<KeyT> result;
  q.push(mRoot);
  for (int i = 0; i < level; i++)
  {
    int sz = q.size();
    for (int j = 0; j < sz; j++)
    {
      node *pt = q.front();
      q.pop();
      if (pt->right != NULL)
        q.push(pt->right);
      if (pt->left != NULL)
        q.push(pt->left);
    }
  }
  while (!q.empty())
  {
    result.push_back(q.front()->data.first);
    q.pop();
  }
  return result;
}

#endif
