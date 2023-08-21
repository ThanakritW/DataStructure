#include <bits/stdc++.h>
#define name e.first
#define num e.second
using namespace std;

map<string, int> words;
int n;
string word;
string ans = "";

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> word;
        words[word]++;
    }
    int mx = -1;
    for (auto e : words)
    {
        if (num >= mx)
        {
            ans = name;
            mx = num;
        }
    }
    cout << ans << ' ' << mx;
    return 0;
}