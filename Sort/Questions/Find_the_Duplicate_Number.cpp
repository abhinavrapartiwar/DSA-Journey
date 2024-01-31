// https://leetcode.com/problems/find-the-duplicate-number/
#include <iostream>
#include <vector>
using namespace std;
int findDuplicate(vector<int> &nums)
{
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
            return nums[j];
    return -1;
}
int main()
{
    vector<int> arr = {3, 1, 3, 4, 2};
    cout << findDuplicate(arr);
    return 0;
}