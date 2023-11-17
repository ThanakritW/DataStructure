void replace(const T &x, list<T> &y)
{
  auto it = this->begin();
  while (it != this->end())
  {
    if (*it == x)
    {
      for (auto e : y)
      {
        this->insert(it, e);
      }
      it = this->erase(it);
      continue;
    }
    it++;
  }
  return;
}
