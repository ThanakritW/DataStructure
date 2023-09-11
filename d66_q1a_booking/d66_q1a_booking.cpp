#include <bits/stdc++.h>
using namespace std;

map<string, set<string>> ticket;
int n, q, m;
string flight, seat;
vector<pair<string, string>> v;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        cin >> flight >> seat;
        ticket[flight].emplace(seat);
    }
    for (int i = 0; i < q; i++)
    {
        cin >> m;
        v.clear();
        bool valid = true;
        for (int j = 0; j < m; j++)
        {
            cin >> flight >> seat;
            if (!valid)
                continue;
            v.push_back({flight, seat});
            if (ticket.find(flight) == ticket.end())
            {
                valid = false;
                continue;
            }
            if (ticket[flight].find(seat) == ticket[flight].end())
            {
                valid = false;
                continue;
            }
        }
        if (!valid)
        {
            cout << "NO\n";
            continue;
        }
        for (auto e : v)
        {
            ticket[e.first].erase(e.second);
            if (ticket[e.first].empty())
                ticket.erase(e.first);
        }
        cout << "YES\n";
    }
    return 0;
}