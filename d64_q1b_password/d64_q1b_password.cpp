#include <bits/stdc++.h>
using namespace std;

string encode(vector<int> &encoder, string x)
{
    string encoded = "";
    for (int i = 0; i < encoder.size(); i++)
        encoded += ('a' + (x[i] - 'a' + encoder[i]) % 26);
    return encoded;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, l;
    unordered_map<string, bool> data;
    string pass;
    cin >> n >> m >> l;
    vector<int> v(l);
    for (int i = 0; i < l; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
    {
        cin >> pass;
        data[pass] = true;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> pass;
        if (data[encode(v, pass)])
            cout << "Match\n";
        else
            cout << "Unknown\n";
    }
    return 0;
}
