#include <bits/stdc++.h>
using namespace std;
vector<long long> total(100005);
vector<pair<long long, long long>> goal;
long long n, m, s, a;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> s;
    goal.push_back({0, s});
    for (long long i = 0; i < n; i++)
    {
        cin >> a >> s;
        goal.push_back({a, s});
    }
    sort(goal.begin(), goal.end());
    long long idx = 0;
    long long sum = 0;
    long long increment = 0;
    for (int i = 0; i < 100005; i++)
    {
        if (i == goal[idx].first)
            increment = goal[idx++].second;
        sum += increment;
        total[i] = sum;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> a >> s;
        int ans = lower_bound(total.begin(), total.end(), a) - total.begin();
        if (ans > s)
        {
            ans = lower_bound(total.begin(), total.end(), a + total[s]) - total.begin();
        }
        cout << ans << ' ';
    }
    return 0;
}