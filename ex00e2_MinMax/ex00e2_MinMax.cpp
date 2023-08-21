#include <bits/stdc++.h>
using namespace std;

int r, c, q, r1, c1, r2, c2, m[110][110];

int main()
{
    cin >> r >> c;
    cin >> q;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cin >> m[i][j];
        }
    }
    for (int k = 0; k < q; k++)
    {
        cin >> r1 >> c1 >> r2 >> c2;
        if (r1 > r2 or c1 > c2)
        {
            cout << "INVALID\n";
            continue;
        }
        if (r1 > r or c1 > c or r2 < 1 or c2 < 1)
        {
            cout << "OUTSIDE\n";
            continue;
        }
        r1 = max(r1, 1);
        c1 = max(c1, 1);
        r2 = min(r2, r);
        c2 = min(c2, c);
        int mx = INT_MIN;
        for (int i = r1; i <= r2; i++)
        {
            for (int j = c1; j <= c2; j++)
            {
                mx = max(mx, m[i][j]);
            }
        }
        cout << mx << '\n';
    }
    return 0;
}
