#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n], i, lar;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    lar = arr[0];
    for (i = 1; i < n; i++)
        if (lar < arr[i])
            lar = arr[i];
    cout << lar;
    return 0;
}