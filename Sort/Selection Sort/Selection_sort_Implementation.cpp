#include <iostream>
using namespace std;
int max_index(int arr[], int start, int end)
{
    int largest = start;
    for (int j = start; j <= end; j++)
        if (arr[j] > arr[largest])
            largest = j;
    return largest;
}
int *selection_sort(int arr[], int length)
{
    int i, j, largest, temp;
    for (i = 0; i < length; i++)
    {
        largest = max_index(arr, 0, length - i - 1);
        temp = arr[largest];
        arr[largest] = arr[length - i - 1];
        arr[length - i - 1] = temp;
    }
    return arr;
}
int main()
{
    int arr[] = {2, -32, 0, 78, 1};
    int *ptr;
    ptr = selection_sort(arr, 5);
    for (int i = 0; i < 5; i++)
        cout << *(ptr + i) <<"  ";
    return 0;
}