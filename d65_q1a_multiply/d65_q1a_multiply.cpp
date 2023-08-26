#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void member_multiply(vector<int> &v,
                     vector<pair<vector<int>::iterator, int>> &multiply)
{
    vector<pair<int, int>> m;
    for (auto it = multiply.begin(); it < multiply.end(); it++)
        m.push_back(make_pair(it->first - v.begin(), it->second));
    sort(m.begin(), m.end());
    int idx = 0;
    vector<int> newV;
    for (int i = 0; i < v.size(); i++)
    {
        if (i == m[idx].first)
        {
            for (int j = 0; j < m[idx].second; j++)
                newV.push_back(v[i]);
            idx++;
        }
        newV.push_back(v[i]);
    }
    v = newV;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    vector<pair<vector<int>::iterator, int>> multiply(m);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        multiply[i].first = v.begin() + a;
        multiply[i].second = b;
    }
    member_multiply(v, multiply);
    cout << "======= result ========" << endl;
    cout << v.size() << endl;
    for (auto &x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}