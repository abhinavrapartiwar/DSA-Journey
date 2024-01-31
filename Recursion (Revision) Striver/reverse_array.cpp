#include <bits/stdc++.h>
using namespace std;
void f(int i, int j, int arr[])
{
    if (i > j)
        return;
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
    f(i + 1, j - 1, arr);
}
int main()
{
    int arr[5]={1,2,3,4,5};
    f(0,4,arr);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}