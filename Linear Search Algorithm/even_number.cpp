#include <iostream>
using namespace std;
int even(int arr[], int l)
{
    int i, count = 0, temp, digit;
    for (i = 0; i < l; i++)
    {
        digit = 0;
        temp = arr[i];
        do
        {
            temp = arr[i] / 10;
            digit++;
        } while (temp != 0);
        if (digit % 2 == 0)
            count++;
    }
    return count;
}
int main()

{
    int l, i;
    cin >> l;
    int arr[l];
    for (i = 0; i < l; i++)
        cin >> arr[i];
    cout << even(arr, l);
    return 0;
}