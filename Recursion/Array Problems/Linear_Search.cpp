#include <bits/stdc++.h>
using namespace std;
int linear(int arr[], int i, int target, int length)
{
    if (arr[i] == target)
        return i;
    if (i == length - 1)
        return -1;
    return linear(arr, ++i, target, length);
}
int main()
{
    int arr[] = {2, 4, 6, 3, 5, 77, 90};
    cout << linear(arr, 0, 88, 7) << endl;
    return 0;
}