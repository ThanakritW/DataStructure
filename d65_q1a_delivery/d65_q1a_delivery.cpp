#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, t, p, total = 0;
    int order = 0;
    cin >> n >> m;
    vector<pair<int, int>> quest, ans;
    queue<int> q[3];
    int idx = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> t;
        quest.push_back({t, i});
    }
    sort(quest.begin(), quest.end());
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t == 1)
        {
            cin >> t >> p;
            q[t].push(p);
            continue;
        }
        if (q[1].empty() or (!q[2].empty() and q[2].front() < q[1].front()))
        {
            total += q[2].front();
            q[2].pop();
        }
        else
        {
            total += q[1].front();
            q[1].pop();
        }
        order++;
        if (idx == quest.size())
            break;
        while (idx < quest.size() and total >= quest[idx].first)
        {
            ans.push_back({quest[idx++].second, order});
        }
    }
    while (idx < quest.size())
        ans.push_back({quest[idx++].second, -1});
    sort(ans.begin(), ans.end());
    for (auto e : ans)
        cout << e.second << ' ';
    return 0;
}