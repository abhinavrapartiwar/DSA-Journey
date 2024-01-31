// https://leetcode.com/problems/peak-index-in-a-mountain-array/
#include <iostream>
using namespace std;
int bsa(int arr[], int length)
{
    int start, end, mid;
    start = 0;
    end = length - 1;
    while (start <= end)
    {
        mid = start + (end + start) / 2;
        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
            return mid;
        else if (arr[mid] > arr[mid + 1] && arr[mid] < arr[mid - 1])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}
int main()
{
    int arr[] = {10, 20, 30, 20, 10};
    cout << "ans is " << bsa(arr, 5);
    return 0;
}