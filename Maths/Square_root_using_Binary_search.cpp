#include <bits/stdc++.h>
using namespace std;
double binarysearch(int num, int p)
{
    int start, end, mid;
    start = 0;
    end = num;
    double root = 0.0;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (mid * mid > num)
            end = mid - 1;
        else if (mid * mid == num)
            return mid;
        else
            start = mid + 1;
    }
    double incre = 0.1;
    for (int i = 0; i < p; i++)
    {
        while (root * root <= num)
            root += incre;
        root -= incre;
        incre /= 10;
    }
    return root;
}
int main()
{
    cout << binarysearch(40, 3);
    return 0;
}