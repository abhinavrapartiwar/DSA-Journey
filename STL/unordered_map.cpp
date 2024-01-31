#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string, int> m;
    m["abh"] = 12;
    m["rap"] = 23;
    string str;
    cin >> str;
    auto itr = m.find(str);
    if (itr != m.end())
        cout << itr->second << endl;
    else
        cout << "not found" << endl;
    return 0;
}