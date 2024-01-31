#include <iostream>
#include <vector>
using namespace std;
int binary_search(vector<int> &nums, int target, int start, int end)
{
    if (start > end)
        return -1;
    int mid = start + (end - start) / 2;
    if (nums[mid] == target)
        return mid;
    if (nums[mid] > target)
        return binary_search(nums, target, start, mid - 1);
    return binary_search(nums, target, mid + 1, end);
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 55, 66, 78};
    int target = 55;
    int length = 7;
    cout << binary_search(nums, target, 0, length - 1);
    return 0;
}