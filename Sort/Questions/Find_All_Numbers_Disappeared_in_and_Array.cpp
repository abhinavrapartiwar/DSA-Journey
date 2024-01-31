// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
/* #include <iostream>
#include <vector>
using namespace std;
vector<int> findDisappearedNumbers(vector<int> &nums)
{
    int i = 0, temp;
    vector<int> count;
    while (i < nums.size())
    {
        if (nums[i] != nums[nums[i] - 1])
        {
            temp = nums[i];
            nums[i] = nums[temp - 1];
            nums[temp - 1] = temp;
        }
        else
            i++;
    }
    for (i = 0; i < nums.size(); i++)
    {
        if (nums[i] != nums[nums[i] - 1])
            count.push_back(i + 1);
    }
    return count;
}
void print_vector(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << endl;
}

int main()
{
    vector<int> arr = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> ans;
    ans = findDisappearedNumbers(arr);
    print_vector(ans);
    return 0;
}

#include <iostream>
#include <iterator>
#include <list>
using namespace std;
int *findDisappearedNumbers(int nums[])
{
    int i = 0, temp, length = sizeof(nums) / sizeof(nums[0]);
    int count[10];
    while (i < length)
    {
        if (nums[i] != nums[nums[i] - 1])
        {
            temp = nums[i];
            nums[i] = nums[temp - 1];
            nums[temp - 1] = temp;
        }
        else
            i++;
    }
    for (i = 0; i < length; i++)
    {
        if (nums[i] != nums[nums[i] - 1])
            count[i] = i + 1;
    }
    return count;
}
*/
#include <iostream>
#include <iterator>
#include <list>
using namespace std;
int main()
{
    int nums[] = {1, 1};
    int i = 0, temp, length = sizeof(nums) / sizeof(nums[0]);
    while (i < length)
    {
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
            cout << j + 1 << endl;
        }
    return 0;
}
