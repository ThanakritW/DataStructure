int process(node *x, int &imb, KeyT &res)
{
    if (x == NULL)
        return 0;
    int leftHeight = process(x->left, imb, res);
    int rightHeight = process(x->right, imb, res);
    int newImb = abs(leftHeight - rightHeight);
    if (imb < newImb)
    {
        // std::cout << imb << ' ' << newImb << ' ' << x->data.first << '\n';
        imb = newImb;
        res = x->data.first;
    }
    else if (imb == newImb and res > x->data.first)
        res = x->data.first;
    return 1 + std::max(leftHeight, rightHeight);
}

KeyT getValueOfMostImbalanceNode()
{
    int imbalance = 0;
    KeyT result = mRoot->data.first;
    process(mRoot, imbalance, result);
    return result;
}
