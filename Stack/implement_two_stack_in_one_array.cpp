#include <bits/stdc++.h>
using namespace std;
void twoStacks ::push1(int x)
{
    if (twoStacks ::top1 < twoStacks ::top1 - 1)
    {
        int i = ++twoStacks ::top1;
        twoStacks ::arr[i] = x;
    }
}

// Function to push an integer into the stack2.
void twoStacks ::push2(int x)
{
    if (twoStacks ::top1 > twoStacks ::top1 - 1)
    {
        int i = --twoStacks ::top2;
        twoStacks ::arr[i] = x;
    }
}

// Function to remove an element from top of the stack1.
int twoStacks ::pop1()
{
    if (twoStacks ::top1 > 0)
    {
        int i = twoStacks ::top1;
        int x = twoStacks ::arr[i];
        twoStacks ::top1--;
    }
}

// Function to remove an element from top of the stack2.
int twoStacks ::pop2()
{
    if (twoStacks ::top2 < size)
    {
        int i = twoStacks ::top2;
        int x = twoStacks ::arr[i];
        twoStacks ::top2--;
    }
}
int main()
{

    return 0;
}