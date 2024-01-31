#include <bits/stdc++.h>
using namespace std;
int findMaxLength(vector<int> &nums)
{
    unordered_map<int, int> m;
    int res = 0, presum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] = nums[i] == 0 ? -1 : 1;
        presum += nums[i];
        if (presum == 0)
            res = i + 1;
        if (m.find(presum) == m.end())
            m[presum] = i;
        if (m.find(presum) != m.end())
            res = max(res, i - m[presum]);
    }
    return res;
}
int main()
{
    vector<int> vec{0, 1, 0, 0, 0, 0};
    int n = 6;
    cout << findMaxLength(vec);
    return 0;
}