// https://leetcode.com/problems/house-robber-ii/description/
// https://www.codingninjas.com/studio/problems/house-robber_839733?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos
#include <bits/stdc++.h>
using namespace std;
int funmem(int n, vector<int> &nums, vector<int> &dp, int istaken)
{
    if (n < 0)
        return 0;
    if (n == 0)
        istaken = 1;
    if (dp[n] != -1)
        return dp[n];
    int pick = nums[n] + funmem(n - 2, nums, dp, istaken);
    istaken = 0;
    int nopick = funmem(n - 1, nums, dp, istaken);
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
int main()
{
    vector<int> vec = {1, 2, 3, 1};
    cout << "Ans is : " << rob(vec) << endl;
    return 0;
}