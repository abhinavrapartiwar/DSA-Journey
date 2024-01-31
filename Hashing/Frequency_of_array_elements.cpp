#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        m[temp]++;
    }
    for (auto x : m)
        cout << x.first << "," << x.second << endl;
    return 0;
}