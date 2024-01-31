#include <bits/stdc++.h>
using namespace std;
int longestCommonSum(bool arr1[], bool arr2[], int n)
{
    unordered_map<int, int> m;
    int res = 0, presum = 0;
    int temp[n];
    // for (int i = 0; i < n; i++)
    // {
        
    // }
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr1[i] - arr2[i];
        presum += temp[i];
        if (presum == 0)
            res = i + 1;
        if (m.find(presum) != m.end())
            res = max(res, i - m[presum]);
        if (m.find(presum) == m.end())
            m[presum] = i;
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        bool arr1[n], arr2[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        auto ans = longestCommonSum(arr1, arr2, n);
        cout << ans << "\n";
    }
    return 0;
}