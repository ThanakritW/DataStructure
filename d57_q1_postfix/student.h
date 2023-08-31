#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include <stack>

using namespace std;

int eval_postfix(vector<pair<int, int>> v)
{
  stack<int> cal;
  for (auto e : v)
  {
    if (e.first == 1)
    {
      cal.push(e.second);
      continue;
    }
    int second = cal.top();
    cal.pop();
    int first = cal.top();
    cal.pop();
    int ans = 0;
    switch (e.second)
    {
    case 0:
      ans = first + second;
      break;
    case 1:
      ans = first - second;
      break;
    case 2:
      ans = first * second;
      break;
    case 3:
      ans = first / second;
      break;
    }
    cal.push(ans);
  }
  return cal.top();
}

#endif
