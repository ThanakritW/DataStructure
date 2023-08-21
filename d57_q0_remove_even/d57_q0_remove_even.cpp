#include <iostream>
#include <vector>
using namespace std;
void remove_even(vector<int> &v, int a, int b)
{
    if (a % 2 != 0)
        a++;
    while (a <= b)
    {
        // cout << a << '\n';
        v.erase(v.begin() + a);
        // for (auto e : v)
        // {
        //     cout << e << ' ';
        // }
        // cout << '\n';
        a++;
        b--;
    }
}
int main()
{
    // read input
    int n, a, b;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        v.push_back(c);
    }
    cin >> a >> b;
    // call function
    remove_even(v, a, b);
    // display content of the vector
    for (auto &x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}