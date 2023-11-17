#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    queue<int> a, b;
    a.push(k);
    b.push(k);
    while (!a.empty())
    {
        int c = a.front();
        a.pop();
        c *= 2;
        c++;
        if (c < n)
        {
            a.push(c);
            b.push(c);
        }
        c++;
        if (c < n)
        {
            a.push(c);
            b.push(c);
        }
    }
    cout << b.size() << '\n';
    while (!b.empty())
    {
        cout << b.front() << ' ';
        b.pop();
    }
    return 0;
}