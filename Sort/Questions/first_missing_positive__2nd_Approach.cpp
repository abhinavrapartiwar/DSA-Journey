// https://leetcode.com/problems/first-missing-positive/
#include <iostream>
#include <vector>
using namespace std;
int firstMissingPositive(vector<int> &nums)
{
    int i = 0, length = nums.size(), j = 0;
    while (i < length)
    {
        if (nums[i] != nums[nums[i] - 1] && nums[i] <= length && nums[i] > 0)
        {
            int temp = 0;
            temp = nums[i];
            nums[i] = nums[temp - 1];
            nums[temp - 1] = temp;
        }
        else
            i++;
    }
    for (j = 0; j < length; j++)
        if (nums[j] != j + 1)
            return j + 1;
    return length + 1;
}

int main()
{
    vector<int> vec = {3, 4, -1, 1};
    cout << firstMissingPositive(vec);
    return 0;
}