#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT>
CP::map_bst<KeyT, MappedT, CompareT> CP::map_bst<KeyT, MappedT, CompareT>::split(KeyT val)
{
  // your code here
  // idea is to clear both old and result tree then construct them again using just pointer relocations.
  CP::map_bst<KeyT, MappedT, CompareT> result;
  node *pt = mRoot;       // pointer that will travel along the tree
  node *now = NULL;       // pointer to the insertion of the old tree
  node *nowResult = NULL; // pointer to the insertion of the result tree
  mRoot = NULL;           // clear old tree
  result.mRoot = NULL;    // clear result tree (just in case)
  while (pt != NULL)      // if not reach the end
  {
    if (compare(pt->data.first, val) == -1) // is <= val, aka stay in the old tree
    {
      if (now == NULL) // if the old tree is clear
      {
        mRoot = pt;
        mRoot->parent = NULL;
      }
      else if (compare(pt->data.first, now->data.first) == -1) // to be in left subtree
      {
        now->left = pt;
        pt->parent = now;
      }
      else // to be in right subtree
      {
        now->right = pt;
        pt->parent = now;
      }
      now = pt;
      pt = pt->right;
      now->right = NULL; // detach right subtree from old tree;
    }
    else
    {

      if (nowResult == NULL) // if the result tree is clear
      {
        result.mRoot = pt;
        result.mRoot->parent = NULL;
      }
      else if (compare(pt->data.first, nowResult->data.first) == -1) // to be in left subtree
      {
        nowResult->left = pt;
        pt->parent = nowResult;
      }
      else // to be in right subtree
      {
        nowResult->right = pt;
        pt->parent = nowResult;
      }
      nowResult = pt;
      pt = pt->left;
      nowResult->left = NULL; // detach left subtree from old tree;
    }
  }
  return result;
}

#endif
