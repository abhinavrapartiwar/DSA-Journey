// https://leetcode.com/problems/split-array-largest-sum/
#include <iostream>
#include <algorithm>
using namespace std;
int split_array(int arr[], int length, int m)
{
    int start, end, mid;
    start = 0;
    end = 0;
    for (int i = 0; i < length; i++)
    {
        start = *max_element(arr, arr + i);
        end += arr[i];
    }
    while (start < end)
    {
        int sum = 0;
        int pieces = 1;
        for (int i = 0; i < length; i++)
        {
            if (sum + arr[i] > mid)
            {
                sum = arr[i];
                pieces++;
            }
            else
                sum += arr[i];
        }

        if (pieces > m)
            mid = start + 1;
        else
            end = mid;
    }
    return end;
}
int main()
{
    int arr[] = {7, 2, 5, 10, 8};
    int m = 2;
    cout << split_array(arr, 5, m);
    return 0;
}