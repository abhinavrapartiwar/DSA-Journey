#include <iostream>
using namespace std;
int main()
{
    int matrix[4][4] = {10, 20, 30, 40, 15, 25, 35, 45, 28, 29, 37, 49, 33, 34, 38, 50};
    int row = 0, column = 3, target;
    cin >> target;
    while (row < 4 && column >= 0)
    {
        if (target == matrix[row][column])
        {
            cout << row << "," << column;
            break;
        }
        else if (matrix[row][column] < target)
            row++;
        else
            column--;
    }
    return 0;
}