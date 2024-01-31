#include <iostream>

using namespace std;
void
find (int arr[], int tar, int r1, int r2)
{
  int i;
  for (i = r1; i < r2; i++)
    if (arr[i] == tar)
      cout << "yes";
}

int
main ()
{
  int tar, l, r1, r2,i;
  cin >> l;
  int arr[l];
  for (i = 0; i < l; i++)
    cin >> arr[i];
  cin >> r1 >> r2;
  cin >> tar;
  find (arr, tar, r1, r2);
  return 0;
}