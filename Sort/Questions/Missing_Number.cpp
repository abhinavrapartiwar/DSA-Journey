// https://leetcode.com/problems/missing-number/
#include <iostream>
using namespace std;
int missing_number(int arr[], int length)
{
    int i = 0, temp;
    while (i < length)
    {
        if (arr[i] != arr[arr[i]] && arr[i] < length)
        {
            temp = arr[i];
            arr[i] = arr[temp];
            arr[temp] = temp;
        }
        else
            i++;
    }
    for (int j = 0; j < length; j++)
        if (arr[j] != j)
            return j;
    return length;
}
int main()
{
    int arr[] = {3, 0, 1};
    int ans = missing_number(arr, 3);
    cout << ans;
    return 0;
}

/* Leetcode SOlution
class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int i = 0, temp,length=arr.size();
    while (i < length)
    {
        if (arr[i] != arr[arr[i]] && arr[i] < length)
        {
            temp = arr[i];
            arr[i] = arr[temp];
            arr[temp] = temp;
        }
        else
            i++;
    }
    for (int j = 0; j < length; j++)
        if (arr[j] != j)
            return j;
    return length;
    }
};
*/