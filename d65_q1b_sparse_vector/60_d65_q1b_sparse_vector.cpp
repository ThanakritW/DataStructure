#include <iostream>
#include <vector>
#include <map>
using namespace std;
void insert_into_sv(map<int, int> &v, int pos, int value)
{
    map<int, int> updated;
    auto it = updated.begin();
    bool inserted = false;
    for (auto e : v)
    {

        if (e.first < pos)
        {
            // cout << it->first << ' ' << e.first << '\n';
            it = updated.insert(it, {e.first, e.second});
        }
        else
        {
            if (!inserted)
            {
                it = updated.insert(it, {pos, value});
                inserted = true;
            }
            // cout << it->first << ' ' << e.first + 1 << '\n';
            it = updated.insert(it, {e.first + 1, e.second});
        }
    }
    if (!inserted)
        it = updated.insert(it, {pos, value});
    v = updated;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    map<int, int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        insert_into_sv(v, a, b);
    }
    cout << v.size() << "\n";
    for (auto &x : v)
    {
        cout << x.first << ": " << x.second << "\n";
    }
}