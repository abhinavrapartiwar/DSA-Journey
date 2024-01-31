#include <iostream>
using namespace std;
int *insertion_sort(int arr[], int length)
{
    int i, j, temp;
    for (i = 0; i < length - 1; i++)
        for (j = i + 1; j > 0; j--)
        {
            if (arr[j] >= arr[j - 1])
                break;
            else
            {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    return arr;
}
int main()
{
    int arr[] = {0, -23, 56, 18};
    int *ptr;
    ptr = insertion_sort(arr, 4);
    for (int i = 0; i < 4; i++)
        cout << *(ptr + i) << "  ";
    return 0;
}