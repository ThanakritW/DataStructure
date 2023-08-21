#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < q; i++) // two pointer method
    {
        int sum;
        int l = 0;
        int r = v.size() - 1;
        bool found = false;
        cin >> sum;
        while (l < r)
        {
            int total = v[l] + v[r];
            if (total == sum)
            {
                cout << "YES\n";
                found = true;
                break;
            }
            if (total < sum)
                l++;
            else
                r--;
        }
        if (!found)
        {
            cout << "NO\n";
        }
    }

    return 0;
}