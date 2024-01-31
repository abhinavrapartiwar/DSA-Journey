#include <iostream>
using namespace std;
int *cycle_sort(int arr[], int length)
{
    int i = 0, temp;
    while (i < length)
    {
        if (arr[i] != arr[arr[i] - 1])
        {
            temp = arr[i];
            arr[i] = arr[temp - 1];
            arr[temp - 1] = temp;
        }
        else
            i++;
    }
    return arr;
}
int main()
{
    int arr[] = {5, 4, 3, 10, 1};
    int *ptr;
    ptr = cycle_sort(arr, 5);
    for (int i = 0; i < 5; i++)
        cout << *(ptr + i) << "  ";
    return 0;
}