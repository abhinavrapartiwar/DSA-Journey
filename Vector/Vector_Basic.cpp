// https://www.codegrepper.com/code-examples/cpp/how+to+input+a+vector+in+c%2B%2B
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, element;
    vector<int> arr;
    cin >> n;
    for (int i; i < n; i++)
    {
        cin >> element;
        arr.push_back(element);
    }
    for (int i = 0; i < n; i++)
        cout << arr[i];
    return 0;
}