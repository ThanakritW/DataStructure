#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, cnt = 0;
    cin >> n;
    long long t = n;
    while (t > 1)
    {
        t /= 2;
        cnt++;
    }
    cout << (int)pow(2, cnt + 1) - n;
    return 0;
}