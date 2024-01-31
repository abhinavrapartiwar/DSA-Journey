#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> subset(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans = {{}};
    int start = 0;
    int end = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        start = 0;
        if (i > 0 && nums[i] == nums[i - 1])
            start = end + 1;
        end = ans.size() - 1;
        int n = ans.size();
        for (int j = start; j < n; j++)
        {
            ans.push_back(ans[j]);
            ans.back().push_back(nums[i]);
        }
    }
    return ans;
}
void print_2d_vector(const vector<vector<int>> &matrix)
{
    for (auto row_obj : matrix)
    {
        for (auto elem : row_obj)
        {
            cout << elem << ", ";
        }
        cout << endl;
    }
    cout << endl;
}
int main()
{
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> ans = subset(nums);
    print_2d_vector(ans);
    return 0;
}