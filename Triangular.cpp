#include <iostream>
using namespace std;

int main()
{
    int t, l, r, traingular;
    cin >> t;
    cin >> l >> r;
    int count;
    for (int i = 0; i < t; i++)
    {
        count=0;
        for (int k = 1; k < r; k++)
        {
            traingular = (k * (k + 1)) / 2;
            if ((l <= traingular) && (traingular <= r))
            {
                count++;
            }
        }
    }

    cout<<count;
    return 0;
}
