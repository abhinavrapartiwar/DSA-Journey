#include <bits/stdc++.h>
using namespace std;
int longest(int arr[], int n, int sum)
{
    unordered_map<int, int> m;
    int res = 0, presum = 0;
    for (int i = 0; i < n; i++)
    {
        presum += arr[i];
        if (presum == sum)
            res = i + 1;
        if (m.find(presum) == m.end())
            m[presum] = i;
        if (m.find(presum - sum) != m.end())
            res = max(res, i - m[presum - sum]);
    }
    return res;
}
int main()
{
    int arr[] = {0, 0, 0, 1, 1};
    int n = 5;
    cout << longest(arr, n, 1);
    return 0;
}