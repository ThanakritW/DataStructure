#include <bits/stdc++.h>
using namespace std;

int n, m, p[500005], mx[50005], t;
set<pair<int, int>> s;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        s.insert({1, i});
        mx[i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (p[i] > mx[t])
        {
            s.erase({mx[t], t});
            mx[t] = p[i];
            s.insert({mx[t], t});
        }
        cout << s.begin()->first << ' ';
    }
    return 0;
}