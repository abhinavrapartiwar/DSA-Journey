#include <bits/stdc++.h>
using namespace std;
bool sorted(int arr[], int i, int length)
{
    if (i == length - 1)
        return true;
    if (arr[i] > arr[i + 1])
        return false;
    return sorted(arr, ++i, length);
}
int main()
{
    int arr[] = {1, 3, 3, 7, 8, 9};
    cout << sorted(arr, 0, 6) << endl;
    return 0;
}