// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
#include <iostream>
using namespace std;
int bsa(int arr[], int target, bool ifstart)
{
    int start, mid, end, ans = -1;
    start = 0;
    end = 6 - 1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (target < arr[mid])
            end = mid - 1;
        else if (target > arr[mid])
            start = mid + 1;
        else
        {
            ans = mid;
            if (ifstart)
                end = mid - 1;
            else
                start = mid + 1;
        }
    }
    return ans;
}
void answer(int arr[], int target)
{
    int first_occurence, last_occurence;
    first_occurence = bsa(arr, target, true);
    last_occurence = bsa(arr, target, false);
    cout << first_occurence << endl
         << last_occurence;
}
int main()
{
    int arr[] = {5, 7, 7, 8, 8, 10}, t = 8;
    answer(arr, t);
    return 0;
}