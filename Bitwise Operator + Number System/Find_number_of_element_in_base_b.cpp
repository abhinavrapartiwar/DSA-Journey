#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, count = 0;
    cin >> num;
    while (num > 0)
    {                       
        count++;
        num = num >> 1;// or we can use formula
    }                  // log2(num)+1=number of digit
    cout << count;
    return 0;
}