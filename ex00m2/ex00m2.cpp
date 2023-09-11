#include <bits/stdc++.h>
#define pii pair<int, int>
using namespace std;

int n, m, q, amount[1000005];
char cmd;
int u, i, v;
vector<pii> result;
vector<int> winner[1000005];
int main()
{
    cin >> n >> m >> q;
    unordered_map<int, int> auct[n + 5];
    for (int i = 0; i < n; i++)
        cin >> amount[i + 1];
    for (int j = 0; j < q; j++)
    {
        cin >> cmd;
        if (cmd == 'B')
        {
            cin >> u >> i >> v;
            auct[i][u] = v;
            continue;
        }
        cin >> u >> i;
        auct[i].erase(u);
    }
    for (int i = 1; i <= n; i++)
    {
        result.clear();
        if (auct[i].size() < amount[i])
        {
            for (auto e : auct[i])
                winner[e.first].push_back(i);
            continue;
        }
        for (auto e : auct[i])
            result.push_back({e.second, e.first});
        sort(result.begin(), result.end(), greater<pii>());
        // cout << result[0].first << ' ' << result[0].second << '\n';
        for (int j = 0; j < amount[i]; j++)
            winner[result[j].second].push_back(i);
    }
    for (int i = 1; i <= m; i++)
    {
        if (winner[i].empty())
        {
            cout << "NONE\n";
            continue;
        }
        sort(winner[i].begin(), winner[i].end());
        for (auto e : winner[i])
            cout << e << ' ';
        cout << '\n';
    }
    return 0;
}