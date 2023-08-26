#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, w;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> w;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    multiset<int> s(v.begin(), v.begin() + w);
    for (int i = 0; i < n - w; i++) // This loop takes o(N)
    {
        s.insert(v[i + w]); // This takes o(log(w))
        auto it = s.begin();
        for (int j = 0; j < w / 2; j++) // takes o(w)
            it++;
        cout << *it << ' ';
        s.erase(s.find(v[i])); // takes o(log(w)), multiset erase is amortized.
    }
    // This algorithm takes o(N*w) time
}