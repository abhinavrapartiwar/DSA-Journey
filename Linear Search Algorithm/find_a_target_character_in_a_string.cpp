#include <iostream>
#include <string.h>
using namespace std;
void print(string s, char t)
{
    int length, i;
    length = s.length();
    for (i = 0; i < length; i++)
    {
        if (s[i] == t)
            cout << "yes";
    }
}

int main()
{
    string str;
    char temp;
    cin >> str;
    cin >> temp;
    print(str, temp);

    return 0;
}