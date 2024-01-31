#include <bits/stdc++.h>
using namespace std;
#define SIZE 5
class queue_implementation
{
public:
    int q[SIZE];
    int f;
    int r;
    queue_implementation()
    {
        f = -1;
        r = -1;
    }
    void enq(int x)
    {
        if ((r + 1 == SIZE && f == 0) || r + 1 == f)
        {
            cout << "QUEUE IS FULL" << endl;
            return;
        }
        if (f == -1)
        {
            f = 0;
        }
        if (r + 1 == SIZE)
        {
            r=0;
        }
        q[r] = x;
        cout << "ELEMENT ADDED" << endl;
    }
    void deq()
    {
        if (f == -1)
        {
            cout << "LIST IS EMPTY" << endl;
            return;
        }
        f++;
    }
};
int main()
{

    return 0;
}