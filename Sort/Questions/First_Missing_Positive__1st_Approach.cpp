// https://leetcode.com/problems/first-missing-positive/
//Approach 1
//Time Exceeded
//first sorted using insertion sort then linearly search for positive number from 1 till the answer is found.
#include <iostream>
#include <vector>
using namespace std;
int firstMissingPositive(vector<int> &nums)
{
    bool ismiss = true;
    int i, j, length = nums.size();
    for (i = 0; i < length - 1; i++)
        for (j = i + 1; j > 0; j--)
        {
            int temp;
            if (nums[j] >= nums[j - 1])
                break;
            else
            {
                temp = nums[j];
                nums[j] = nums[j - 1];
                nums[j - 1] = temp;
            }
        }
    for (i = 1; i < 1000000; i++)
    {
        for (j = 0; j < length; j++)
        {
            if (nums[j] == i)
            {
                ismiss = true;
                break;
            }
            else
                ismiss = false;
        }
        if (ismiss == false)
            return i;
    }
    return -1;
}
int main()
{
    vector<int> vec = {7, 8, 9, 11, 12};
    cout << firstMissingPositive(vec);
    return 0;
}