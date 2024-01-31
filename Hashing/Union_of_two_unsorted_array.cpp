#include <bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> vec;
    unordered_set<int> s1;
    for (auto x : nums1)
    {
        s1.insert(x);
    }

    for (auto x : nums2)
    {
        if (s1.find(x) != s1.end())
        {
            vec.push_back(x);
            s1.erase(x);
        }
    }
    return vec;
}
int main()
{
    unordered_set<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        s.insert(t);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int t;
        cin >> t;
        s.insert(t);
    }
    cout << "distinct element is " << s.size() << endl;
    return 0;
}