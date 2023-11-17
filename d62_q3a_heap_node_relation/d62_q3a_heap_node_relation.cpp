#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, q, a, b;
    cin >> n >> q;
    while (q--)
    {
        cin >> a >> b;
        if (a == b)
        {
            cout << "a and b are the same node\n";
            continue;
        }
        if (b > a)
        {
            bool f = false;
            while (b >= 0 and b >= a)
            {
                b = (b - 1) / 2;
                if (b == a)
                {
                    cout << "a is an ancestor of b\n";
                    f = true;
                    break;
                }
            }
            if (!f)
                cout << "a and b are not related\n";
            continue;
        }
        else
        {
            bool f = false;
            while (a >= 0 and a >= b)
            {
                a = (a - 1) / 2;
                if (a == b)
                {
                    cout << "b is an ancestor of a\n";
                    f = true;
                    break;
                }
            }
            if (!f)
                cout << "a and b are not related\n";
        }
    }
    return 0;
}