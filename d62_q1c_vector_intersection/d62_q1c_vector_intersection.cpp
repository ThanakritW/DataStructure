#include <bits/stdc++.h>
using namespace std;

set<long long> a, b, c;
long long n, m, t;

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        a.insert(t);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> t;
        b.insert(t);
    }
    for (auto e : a)
    {
        if (b.find(e) != b.end())
        {
            c.insert(e);
        }
    }
    for (auto e : c)
    {
        cout << e << ' ';
    }
    return 0;
}