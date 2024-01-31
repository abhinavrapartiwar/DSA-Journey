// https://www.geeksforgeeks.org/find-rotation-count-rotated-sorted-array/
#include <iostream>
using namespace std;
int rotation_count(int arr[], int length)
{
    int start, end, mid;
    start = 0;
    end = length - 1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] > arr[mid + 1] && mid < end)
            return mid;
        else if (arr[mid] < arr[mid - 1] && mid > start)
            return mid - 1;
        else if (arr[mid] == arr[start] && arr[mid] == arr[end])
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
    int arr[] = {7, 9, 11, 12, 15};
    cout << rotation_count(arr, 5) + 1;
    return 0;
}
