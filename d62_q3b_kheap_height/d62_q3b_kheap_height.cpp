#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, k;
    cin >> n >> k;
    n--;
    if (k == 1)
    {
        cout << n;
        return 0;
    }
    long long cnt = 0;
    long long accum = k;
    while (n > 0)
    {
        n -= accum;
        accum *= k;
        cnt++;
    }
    cout << cnt;
    return 0;
}