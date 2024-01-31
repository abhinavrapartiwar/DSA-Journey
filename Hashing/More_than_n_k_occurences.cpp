#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int> &nums)
{
    unordered_map<int, int> m;
    unordered_set<int> s;
    vector<int> vec;
    for (int i = 0; i < nums.size(); i++)
    {
        m[nums[i]]++;
        if (m[nums[i]] > (nums.size() / 3) && s.find(nums[i]) == s.end())
        {
            vec.push_back(nums[i]);
            s.insert(nums[i]);
        }
    }
    return vec;
}
int main()
{

    return 0;
}