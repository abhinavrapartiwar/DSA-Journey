#include <bits/stdc++.h>
using namespace std;
void f(int i,int j)
{
    if(j>100)
    return;
    cout<<i<<endl;
    f(j,i+j);
}
int main()
{
    f(0,1);
    return 0;
}