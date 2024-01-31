// https://leetcode.com/problems/search-in-rotated-sorted-array/
// not for duplicate value
#include <iostream>
using namespace std;
int bsa(int arr[], int target, int start, int end)
{
    int mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] > target)
            end = mid - 1;
        else if (arr[mid] < target)
            start = mid + 1;
        else
            return mid;
    }
    return -1;
}
int rotated(int arr[], int length)
{
    int start, end, mid;
    start = 0;
    end = length - 1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] > arr[mid + 1] && mid < end)
            return mid;
        else if (arr[mid - 1] > arr[mid] && mid > start)
            return mid - 1;
        else if (arr[start] == arr[mid] && arr[end] == arr[mid])
        {
            if (arr[start] > arr[start + 1])
                return start;
            start++;
            if (arr[end] < arr[end - 1])
                return end - 1;
            end--;
        }
        else if (arr[start] < arr[mid] || arr[start] == arr[mid] && arr[mid] > arr[end])
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}
int main()
{
    int arr[] = {2, 4, 7, 9, 13, 16, 48};
    int target = 3;
    int pivot = rotated(arr, 7);
    cout << "pivot is " << pivot << endl;
    if (pivot == -1)
        cout << bsa(arr, target, 0, 6);
    else if (arr[pivot] == target)
        cout << pivot;
    else if (target > arr[0])
        cout << bsa(arr, target, 0, pivot - 1);
    else
        cout << "the target element is in index = " << bsa(arr, target, pivot + 1, 7 - 1);
    return 0;
}