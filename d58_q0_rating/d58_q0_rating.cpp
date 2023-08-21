#include <bits/stdc++.h>
using namespace std;
map<int, pair<int, float>> codes;
map<string, pair<int, float>> teachs;
int n, code, pt;
string teach;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> code >> teach >> pt;
        int cnt = codes[code].first;
        float total = cnt * codes[code].second;
        total += pt;
        cnt++;
        codes[code] = {cnt, total / cnt};
        cnt = teachs[teach].first;
        total = cnt * teachs[teach].second;
        total += pt;
        cnt++;
        teachs[teach] = {cnt, total / cnt};
    }
    for (auto e : codes)
    {
        cout << e.first << ' ' << std::fixed << std::setprecision(2) << e.second.second << '\n';
    }
    for (auto e : teachs)
    {
        cout << e.first << ' ' << std::fixed << std::setprecision(2) << e.second.second << '\n';
    }
    return 0;
}