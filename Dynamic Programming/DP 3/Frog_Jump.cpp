#include <bits/stdc++.h>
using namespace std;
int funmem(int n, vector<int> &h, vector<int> &dp)
{
    if (n <= 0)
        return 0;
    if (n == 1)
        return abs(h[1] - h[0]);
    if (dp[n] != -1)
        return dp[n];
    int s1 = abs(h[n] - h[n - 1]); // calculating cost if only 1 step taken
    int s2 = abs(h[n] - h[n - 2]); // calculating cost if only 2 step taken
    dp[n] = min(s1 + funmem(n - 1, h, dp), s2 + funmem(n - 2, h, dp));
    return dp[n];
}
int funtab(int n, vector<int> &h)
{
    vector<int> dp(n + 1, -1);
    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);
    for (int i = 2; i <= n; i++)
    {
        int s1 = abs(h[i] - h[i - 1]) + dp[i - 1]; // calculating cost if only 1 step taken
        int s2 = abs(h[i] - h[i - 2]) + dp[i - 2]; // calculating cost if only 2 step taken
        dp[i] = min(s1, s2);
    }
    return dp[n];
}
int funso(int n, vector<int> &h)
{
    int prev = 0;
    int curr = abs(h[1] - h[0]);
    int ans = -1;
    for (int i = 2; i <= n; i++)
    {
        int s1 = abs(h[i] - h[i - 1]) + curr; // calculating cost if only 1 step taken
        int s2 = abs(h[i] - h[i - 2]) + prev; // calculating cost if only 2 step taken
        ans = min(s1, s2);
        prev = curr;
        curr = ans;
    }
    return ans;
}
int frogJump(int n, vector<int> &h)
{
    // vector<int> dp(n + 1, -1);
    // return funmem(n - 1, h, dp);
    // return funtab(n - 1, h);
    return funso(n - 1, h);
}
int main()
{
    int n = 4;
    //               0   1   2   3
    vector<int> h = {10, 20, 30, 10};
    cout << "ans is: - " << frogJump(n, h);
    return 0;
}