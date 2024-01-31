// Sieve of Eratosthenes
#include <bits/stdc++.h>
using namespace std;
void sieve(bool arr[], int num)
{
    for (int i = 2; i * i <= num; i++)
        if (!arr[i])
            for (int j = i * 2; j <= num; j += i)
                arr[j] = true;
    for (int i = 2; i <= num; i++)
        if (!arr[i])
            cout << i << endl;
}

int main()
{
    int num;
    cin >> num;
    bool arr[num + 1];
    sieve(arr, num);
    return 0;
}
