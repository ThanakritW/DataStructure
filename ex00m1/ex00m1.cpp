#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, t;
    cin >> n >> m;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        v.push_back(t);
        pq.push({0, i});
    }
    for (int i = 0; i < m; i++)
    {
        int idx = pq.top().second;
        int time = pq.top().first;
        cout << pq.top().first << '\n';
        pq.pop();
        pq.push({time + v[idx], idx});
    }
    return 0;
}