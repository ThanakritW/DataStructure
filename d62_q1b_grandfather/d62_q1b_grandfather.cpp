#include <bits/stdc++.h>
using namespace std;

map<long long, long long> tree;
long long n, q, u, v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        cin >> u >> v;
        tree[v] = u;
    }
    for (int i = 0; i < q; i++)
    {
        cin >> u >> v;
        if (u == v or tree[tree[u]] == 0 or tree[tree[v]] == 0 or tree[tree[u]] != tree[tree[v]])
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
    }
    return 0;
}