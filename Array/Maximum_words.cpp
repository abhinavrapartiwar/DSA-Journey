#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int i, j, count, t;
    cin >> t;
    int a[t];
    for (i = 0; i < t; i++)
    {
        count = 0;
        string s;
        getline(cin, s);
        for (j = 0; j < s.length(); j++)
            if (s[j] == ' ')
                count++;
        a[i] = count + 1;
        j=a[0];
    }
    cout << a[0];
    for (i = 1; i < t; i++)
    {
        j = a[0];
        if (j < a[i])
            j = a[i];
    }
    return 0;
}