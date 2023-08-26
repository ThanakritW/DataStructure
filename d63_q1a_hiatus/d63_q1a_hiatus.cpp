#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, q, y, m;
    cin >> n >> q;
    vector<pair<int, int>> vol(n);
    for (int i = 0; i < n; i++)
        cin >> vol[i].first >> vol[i].second;
    sort(vol.begin(), vol.end());
    while (q--)
    {
        cin >> y >> m;
        auto it = upper_bound(vol.begin(), vol.end(), make_pair(y, m));
        if (it == vol.begin())
        {
            cout << "-1 -1 ";
            continue;
        }
        it--;
        if (it->first == y and it->second == m)
        {
            cout << "0 0 ";
            continue;
        }
        cout << it->first << ' ' << it->second << ' ';
    }
    return 0;
}