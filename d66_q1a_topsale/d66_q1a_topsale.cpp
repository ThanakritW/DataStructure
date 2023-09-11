#include <bits/stdc++.h>
using namespace std;

map<int, int> cart;
map<int, set<int>> logs;
int n, m, t, cmd, amount;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        cart[t] = 0;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> cmd;
        if (cmd == 1)
        {
            cin >> t >> amount;
            if (cart.find(t) == cart.end())
                continue;
            int cnt = cart[t];
            logs[cnt].erase(t);
            if (logs[cnt].empty())
                logs.erase(cnt);
            cnt += amount;
            cart[t] = cnt;
            logs[cnt].emplace(t);
        }
        else
        {
            cin >> t;
            auto it = logs.lower_bound(t);
            if (it == logs.begin())
            {
                cout << "NONE\n";
                continue;
            }
            it--;
            cout << *(it->second.rbegin()) << '\n';
        }
    }
    return 0;
}