#include <bits/stdc++.h>
using namespace std;
int fib(int n)
{
    int prev=1,prev2=0, curr=-1;
    for(int i=2;i<n+1;i++)
    {
        curr=prev+prev2;
        prev2=prev;
        prev=curr;
    }
    return curr;
}
int main()
{
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}