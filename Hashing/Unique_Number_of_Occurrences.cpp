#include <bits/stdc++.h>
using namespace std;
bool uniqueOccurrences(vector<int> &arr)
{
    unordered_map<int, int> m;
    for (auto x : arr)
        m[x]++;
    auto i = m.begin();
    int t = i->second;
    i++;
    for (auto itr = i; itr != m.end(); itr++)
    {
        if (t == itr->second)
            return false;
        else
            t = itr->second;
    }
    return true;
}
int main()
{
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << uniqueOccurrences(arr) << endl;
    return 0;
}