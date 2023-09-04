#include <iostream>
#include <vector>
using namespace std;
void cross_2d(vector<vector<int>> &m, int r1, int r2, int c1, int c2)
{
    vector<vector<int>> v;
    vector<int> adder;
    int r = m.size();
    int c = m[0].size();
    for (int i = 0; i < r; i++)
    {
        if (i >= r1 and i <= r2)
            continue;
        v.push_back(adder);
        for (int j = 0; j < c; j++)
        {
            if (j >= c1 and j <= c2)
                continue;
            v[v.size() - 1].push_back(m[i][j]);
        }
    }
    m = v;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<vector<int>> m;
    int r, c, r1, r2, c1, c2;
    cin >> r >> c;
    cin >> r1 >> r2 >> c1 >> c2;
    m.resize(r);
    for (int i = 0; i < r; i++)
    {
        m[i].resize(c);
        for (int j = 0; j < c; j++)
        {
            cin >> m[i][j];
        }
    }
    cross_2d(m, r1, r2, c1, c2);
    for (int i = 0; i < m.size(); i++)
    {
        for (int j = 0; j < m[i].size(); j++)
        {
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}