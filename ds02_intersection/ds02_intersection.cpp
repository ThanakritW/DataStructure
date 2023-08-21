#include <bits/stdc++.h>
using namespace std;

vector<int> u, v, ans;
int n, m, t;

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        v.push_back(t);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> t;
        u.push_back(t);
    }
    sort(v.begin(), v.end());
    sort(u.begin(), u.end());
    for (auto e : u)
    {
        if (find(v.begin(), v.end(), e) != v.end())
            ans.push_back(e);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        if (i == 0)
        {
            cout << ans[i] << ' ';
            continue;
        }
        if (ans[i] == ans[i - 1])
            continue;
        cout << ans[i] << ' ';
    }
    return 0;
}