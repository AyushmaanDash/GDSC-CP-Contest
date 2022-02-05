#include <iostream>
using namespace std;

int main()
{
    long long int n,x,ai;
    cin>>n>>x;
    int flag =0;
    for (int i = 0; i < n; i++)
    {
        cin>>ai;
        if(ai>=x)
        {
            cout<<ai;
            flag++;
            break;
        }   
    }
    if(!flag)
    cout<<"Impossible";
    return 0;
}
