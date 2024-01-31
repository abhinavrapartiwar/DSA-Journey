#include <bits/stdc++.h>
using namespace std;
void f(int count)
{
    if (count == 5)
        return;
    f(++count);
    cout << count << endl;
}
int main()
{
    f(0);
    return 0;
}