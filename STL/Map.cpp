#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "abc"; // O(log N)
    m[4] = "kbc";
    m[33] = "okay";
    m.insert({2, "none"});
    cout << m.size() << endl; 
    auto t = m.find(4);
    m.erase(t);
    for (auto &it : m)
        cout << it.first << " " << it.second << endl;
    return 0;
}