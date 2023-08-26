#include <bits/stdc++.h>
using namespace std;

int n, w;
int med(vector<int>::iterator l, vector<int>::iterator r)
{
    vector<int> v(l, r);
    sort(v.begin(), v.end());
    return v[w / 2];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> w;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n - w; i++)
        cout << med(v.begin() + i, v.begin() + i + w + 1) << ' ';
    /* take notes that this loop takes o(N)
    and med function takes o(wlog(w)) time,
    which makes this algorithm takes o(n*wlog(w)) aka, slow AF */
    return 0;
}