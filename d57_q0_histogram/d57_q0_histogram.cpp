#include <bits/stdc++.h>
using namespace std;

int n;
string word;
map<string, int> words;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> word;
        words[word]++;
    }
    for (auto e : words)
    {
        if (e.second > 1)
        {
            cout << e.first << ' ' << e.second << '\n';
        }
    }
    return 0;
}