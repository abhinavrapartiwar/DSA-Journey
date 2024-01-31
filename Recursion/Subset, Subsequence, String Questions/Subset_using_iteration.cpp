#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> subset(vector<int> &nums)
{
    vector<vector<int>> ans = {{}};
    for (auto num : nums)
    {
        int n = ans.size();
        for (int i = 0; i < n; i++)
        {
            ans.push_back(ans[i]);
            ans.back().push_back(num);
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
    vector<int> nums = {1, 2, 3, 4};
    vector<vector<int>> ans = subset(nums);
    print_2d_vector(ans);
    return 0;
}