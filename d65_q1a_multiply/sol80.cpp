#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void member_multiply(vector<int> &v,
                     vector<pair<vector<int>::iterator, int>> &multiply)
{
    auto it = v.begin();
    sort(multiply.begin(), multiply.end(), greater<pair<vector<int>::iterator, int>>());
    for (auto e : multiply)
    {
        vector<int> adder(e.second, *(v.begin() + (e.first - it)));
        v.insert(v.begin() + (e.first - it), adder.begin(), adder.end());
        // take notes that v.insert() take o(N) time, which make this entire code runs on o(N^2)
    }
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