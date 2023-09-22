#include <bits/stdc++.h>
using namespace std;

int q, front, sz, cap, last, cor;

void ok()
{
    cout << "OK\n";
}
void wrong()
{
    cout << "WRONG\n";
}
void wrongn(int x)
{
    cout << "WRONG " << x << '\n';
}

int corFront()
{
    return (last - sz + cap) % cap;
}

int corSz()
{
    if (front == last)
        return sz == cap ? sz : 0;
    if (((last - front) + cap) % cap != sz)
        return ((last - front) + cap) % cap;
    return sz;
}

int corCap()
{
    if (front == last and sz)
        return sz;
    int maxV = sz - last + front;
    if (maxV > cap)
        return maxV;
    if (front > last and cap != maxV)
    {
        return maxV;
    }
    if (max(front, last) > cap)
    {
        return max(front, last) + 1;
    }
    return cap;
    // if ()
}

int corLast()
{
    return (front + sz) % cap;
}

int main()
{
    freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> q;
    while (q--)
    {
        cin >> front >> sz >> cap >> last >> cor;
        if (cor == 1)
        {
            int f = corFront();
            if (f == front)
                ok();
            else
                wrongn(f);
        }
        else if (cor == 2)
        {
            int f = corSz();
            if (f == sz)
                ok();
            else
                wrongn(f);
        }
        else if (cor == 3)
        {
            int f = corCap();
            if (f == cap)
                ok();
            else
                wrongn(f);
        }

        else if (cor == 4)
        {
            int f = corLast();
            if (f == last)
                ok();
            else
                wrongn(f);
        }
        else
        {
            if (corFront() != front or corCap() != cap or corLast() != last or corSz() != sz)
                wrong();
            else
                ok();
        }
    }

    return 0;
}