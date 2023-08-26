#include <bits/stdc++.h>
#define add(x, y) \
    cin >> x;     \
    y.insert(x);
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, t;
    set<int> s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        add(t, s);
    }
    t = 1;
    if (s.size() != n)
    {
        cout << "NO";
        return 0;
    }
    for (auto e : s)
    {
        if (e != t++)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}