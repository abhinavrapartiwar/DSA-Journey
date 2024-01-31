// https://leetcode.com/problems/longest-consecutive-sequence/
#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int count = 1;
    int ans = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] - 1 == nums[i - 1])
            count++;
        else if (nums[i] == nums[i - 1])
            ;
        else
        {
            ans = max(ans, count);
            count = 1;
        }
    }
    ans = max(ans, count);
    return (nums.size() == 0 ? 0 : ans);
}
// Using Hashing
int longestConsecutive(vector<int> &nums)
{
    int res = 0, curr = 0;
    unordered_set<int> s;
    for (int i = 0; i < nums.size(); i++)
    {
        s.insert(nums[i]);
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (s.find(nums[i] - 1) == s.end())
        {
            curr = 1;
            while (s.find(nums[i] + curr) != s.end())
            {
                curr++;
            }
        }
        res = max(res, curr);
    }
    res = max(res, curr);
    return res;
}
int main()
{
    vector<int> ans{0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    cout << longestConsecutive(ans) << endl;
    return 0;
}