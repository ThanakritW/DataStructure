#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int n, q, k, t;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    cin >> n >> q >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < q; i++)
    {
        cin >> t;
        cout << upper_bound(v.begin(), v.end(), t + k) - lower_bound(v.begin(), v.end(), t - k) << ' ';
    }
    return 0;
}