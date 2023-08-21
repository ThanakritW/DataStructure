#include <bits/stdc++.h>
using namespace std;

int n, k;
string vote;
map<string, int> ballot;
vector<int> ranking;

int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> vote;
        ballot[vote] += 1;
    }
    for (auto e : ballot)
    {
        ranking.push_back(e.second);
    }
    sort(ranking.begin(), ranking.end(), greater<int>());
    if (ranking.size() < k)
    {
        cout << ranking[ranking.size() - 1];
        return 0;
    }
    cout << ranking[k - 1];
    return 0;
}