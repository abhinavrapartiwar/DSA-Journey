#include <iostream>
using namespace std;
int max(int arr[], int l)
{
    int i, hig;
    for (i = 0; i < l; i++)

        if (arr[i] >= arr[i + 1])
            hig = arr[i];
    return hig;
}

int main()
{
    int i, j, m, n;
    int arr[m][n], b[m];
    cin >> m >> n;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> arr[i][j];
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            b[i] = 0;
            b[i] += arr[i][j];
        }
    cout << max(b, m);

    return 0;
}