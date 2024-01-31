// https://www.geeksforgeeks.org/recursive-programs-to-find-minimum-and-minimum-elements-of-array/
#include <iostream>
using namespace std;
int minimum(int arr[], int n)
{
    if (n == 1)
        return arr[0];
    else
        return min(arr[n - 1], minimum(arr, n - 1));
}
int maximum(int arr[], int n)
{
    if (n == 1)
        return arr[0];
    else
        return max(arr[n - 1], maximum(arr, n - 1));
}
int main()
{
    int arr[] = {1, 4, 3, -5, -4, 8, 6};
    cout << minimum(arr, 7) << endl;
    cout << maximum(arr, 7);
    return 0;
}