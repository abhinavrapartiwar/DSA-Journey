#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> ans;
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        m[nums[i]] = i;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (m.find(target - nums[i]) != m.end() && i != m[target - nums[i]])
        {
            ans.push_back(m[nums[i]]);
            ans.push_back(m[target - nums[i]]);
            break;
        }
    }
    return ans;
}
int main()
{

    return 0;
}