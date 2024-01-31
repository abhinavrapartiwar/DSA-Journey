#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(2);
    s.insert(6);
    s.insert(23);
    s.insert(24);
    s.insert(26);
    for (auto x : s)
        cout << x << endl;
    return 0;
}