#include <iostream>
using namespace std;
char bsa(char str[], char c)
{
    int start, end, mid;
    start = 0;
    end = 3 - 1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (str[mid] > c)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return str[start % 3];
}
int main()
{
    char str[] = {'c', 'f', 'j'};
    cout << bsa(str, 'a');
    return 0;
}