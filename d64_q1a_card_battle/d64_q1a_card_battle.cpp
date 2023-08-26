#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    multiset<int> cards;
    int n, m, oi, t;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        cards.insert(t);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> oi;
        for (int j = 0; j < oi; j++)
        {
            cin >> t;
            auto it = cards.upper_bound(t);
            if (it == cards.end())
            {
                cout << i + 1;
                return 0;
            }
            cards.erase(it);
        }
    }
    cout << m + 1;
    return 0;
}