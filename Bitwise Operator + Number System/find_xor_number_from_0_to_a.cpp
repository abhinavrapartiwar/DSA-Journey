#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        num = num ^ i;
        cout << num << endl;
    }
    return 0;
}