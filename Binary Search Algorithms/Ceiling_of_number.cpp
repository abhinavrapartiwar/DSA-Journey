#include <iostream>
using namespace std;
int ceiling(int arr[], int t, int l)
{
    int start, mid, end;
    start = 0;
    end = l - 1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] > t)
            end = mid - 1;
        else if (arr[mid] < t)
            start = mid + 1;
        else
            return mid;
    }
    return start;
}
int main()
{
    int arr[] = {3, 4, 6, 8, 9, 13, 15, 18};
    cout << "ans is " << ceiling(arr, 14, 8);
    return 0;
}