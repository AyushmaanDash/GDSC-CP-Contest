#include <iostream>
using namespace std;

int main()
{
    int mex[1000];
    for (int i = 0; i < 1000; i++)
    {
        cin >> mex[i];
    }

    for (int j = 0; j < 1000; j++)
    {
        if (mex[j] != (j+1))
        {
            cout << j;
            break;
        }
    }
    return 0;
}
