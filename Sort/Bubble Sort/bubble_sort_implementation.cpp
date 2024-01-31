#include <iostream>
using namespace std;
int *bubble_sort(int arr[], int length)
{
    bool swapped;
    int i, j, temp;
    for (i = 0; i < length - 1; i++)
    {
        swapped = false;
        for (j = 1; j < length - i; j++)
            if (arr[j - 1] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
                swapped = true;
            }
        if (!swapped)
            break;
    }
    return arr;
}
int main()
{
    int arr[] = {5, 4, 3, 10, 1}, length = 5, i;
    int *ptr_to_array;
    ptr_to_array = bubble_sort(arr, length);
    for (i = 0; i < length; i++)
        cout << *(ptr_to_array + i) << endl;
    return 0;
}