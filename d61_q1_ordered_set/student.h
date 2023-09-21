#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
vector<T> Union(const vector<T> &A, const vector<T> &B)
{
    vector<T> v;
    v = A;
    vector<T> sorted(A);
    sort(sorted.begin(), sorted.end());
    for (auto e : B)
    {
        auto it = lower_bound(sorted.begin(), sorted.end(), e);
        // cout << e << "vs" << *it << '\n';
        if (*it != e)
            v.push_back(e);
    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T> &A, const vector<T> &B)
{
    vector<T> v;
    vector<T> sorted(B);
    sort(sorted.begin(), sorted.end());
    for (auto e : A)
    {
        auto it = lower_bound(sorted.begin(), sorted.end(), e);
        if (*it == e)
            v.push_back(e);
    }
    return v;
}
