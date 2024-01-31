// https://www.callicoder.com/search-in-sorted-infinite-array/
#include <iostream>
using namespace std;
int bsa(int arr[], int target)
{
    int start, end, mid;
    start = 0;
    end = 1;
    while (arr[end] < target)
    {
        start = end;
        end = end * 2;
    }
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
int main()
{
    int arr[] = {2, 5, 7, 9, 10, 12, 15, 16, 18, 20, 24, 28, 32, 35};
    cout << "ans is " << bsa(arr, 12);
    return 0;
}