#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    for (int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            if (num / i == i)
                cout << i << endl;
            else
                cout << i << " " << num / i << endl;
        }
    }
    return 0;
}