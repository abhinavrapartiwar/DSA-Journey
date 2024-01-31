// https://leetcode.com/problems/house-robber/description/
// https://www.codingninjas.com/studio/problems/maximum-sum-of-non-adjacent-elements_843261?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos
// https://www.geeksforgeeks.org/problems/stickler-theif-1587115621/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article
#include <bits/stdc++.h>
using namespace std;
int funmem(int n, vector<int> &nums, vector<int> &dp)
{
    if (n < 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];
    int pick = nums[n] + funmem(n - 2, nums, dp);
    int nopick = funmem(n - 1, nums, dp);
    dp[n] = max(pick, nopick);
    return dp[n];
}
int funtab(vector<int> &nums)
{
    vector<int> dp(nums.size(), -1);
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);
    for (int i = 2; i < nums.size(); i++)
    {
        int pick = nums[i] + dp[i - 2];
        int nopick = dp[i - 1];
        dp[i] = max(pick, nopick);
    }
    return dp[nums.size() - 1];
}
int funso(vector<int> &nums)
{
    int prev = nums[0];
    int curr = max(nums[0], nums[1]);
    int ans = -1;
    for (int i = 2; i < nums.size(); i++)
    {
        int pick = nums[i] + prev;
        int nopick = curr;
        ans = max(pick, nopick);
        prev = curr;
        curr = ans;
    }
    return ans;
}
int rob(vector<int> &nums)
{
    // vector<int> dp(nums.size(), -1);
    // return funmem(nums.size() - 1, nums, dp);
    if (nums.size() == 1)
        return nums[0];
    // return funtab(nums);
    return funso(nums);
}
int main()
{
    vector<int> vec = {1, 2, 3, 1};
    cout << "Ans is : " << rob(vec) << endl;
    return 0;
}