#include <bits/stdc++.h>
using namespace std;
int countzero(int n, int zero)
{
    // one way of wriiting
    // if (n == 0)
    //     return zero;
    // if (n % 10 == 0)
    //     zero++;
    // return countzero(n / 10, zero);

    // another way of writing
    if (n == 0)
        return zero;
    if (n % 10 == 0)
        return countzero(n / 10, ++zero);
    return countzero(n / 2, zero);
}
int main()
{
    cout << countzero(30402, 0) << endl;
    return 0;
}