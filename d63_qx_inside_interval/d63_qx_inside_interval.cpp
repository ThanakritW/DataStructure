#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, q;
    cin >> n >> q;
    vector<pair<int, int>> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].first >> s[i].second;
    }
    sort(s.begin(), s.end());
    while (q--)
    {
        int p;
        cin >> p;
        auto l = upper_bound(s.begin(), s.end(), make_pair(p, INT_MAX));
        if (l != s.begin())
            l--;
        if (p >= l->first and p <= l->second)
            cout
                << 1 << ' ';
        else
            cout << 0 << ' ';
    }
    return 0;
}