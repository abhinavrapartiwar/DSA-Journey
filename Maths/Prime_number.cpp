#include <bits/stdc++.h>
using namespace std;
bool prime_or_not(int num)
{
    for (int i = 2; i * i < num / 2; i++) // we go till root num but we sqaure both the sides
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int num;
    cin >> num;
    cout << prime_or_not(num);
    return 0;
}