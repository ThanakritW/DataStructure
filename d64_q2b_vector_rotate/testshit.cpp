#include <stdexcept>
#include <iostream>
#include <string>
#include <cassert>
#include "vector.h"
#include "student.h"

using CP::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    CP::vector<int> v(100);
    for (int i = 0; i < 100; i++)
        v[i] = i;
    auto it = v.begin() + 42;
    cout << *it;
    for (int i = 10; i < 30; i++)
        v.erase(v.begin());
    cout << *it;
}
