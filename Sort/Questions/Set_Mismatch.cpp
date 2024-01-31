// https://leetcode.com/problems/set-mismatch/
#include <iostream>
#include <vector>
using namespace std;
vector<int> findErrorNums(vector<int> &nums)
{
    vector<int> ans;
    int i = 0, length = nums.size();
    while (i < length)
    {
        int temp;
        if (nums[i] != nums[nums[i] - 1])
        {
            temp = nums[i];
            nums[i] = nums[temp - 1];
            nums[temp - 1] = temp;
        }
        else
            i++;
    }
    for (int j = 0; j < length; j++)
        if (nums[j] != j + 1)
        {
            ans.push_back(nums[j]);
            ans.push_back(j + 1);
        }
    return ans;
}
int main()
{
    vector<int> vect = {1, 2, 2, 4};
    vector<int> ans = findErrorNums(vect);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
    return 0;
}