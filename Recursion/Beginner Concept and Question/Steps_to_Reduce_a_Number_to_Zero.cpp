#include <bits/stdc++.h>
using namespace std;
int helperfn(int n, int step)
{
    if (n == 0)
        return step;
    if (n % 2 == 0)
        return (helperfn(n / 2, ++step));
    else
        return (helperfn(n - 1, ++step));
}
int numberOfSteps(int num)
{
    return (helperfn(num, 0));
}
int main()
{
    cout << numberOfSteps(123) << endl;
    return 0;
}