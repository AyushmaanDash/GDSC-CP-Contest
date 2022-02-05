// In a town there are n shops numbered 1 to n. Sam wants to buy x chocolates for his friend for his upcoming birthday. But he is a lazy person, and thus he will go to one shop only.

// He knows the stock of chocolates in each shop. Help him find out which shop he should visit in order to buy the chocolates.

// If there are multiple answers, print the shop that has smallest index. If the given conditions can't be satisfied, print "Impossible".

// Input Format

// The first line of input contains n and x - the number of shops and the number of chocolates.

// The next line contains n space separated integers a1, a2, a3 ... an - the stock of i- th shop.

// Constraints

// 1 <= n <= 2 * 10 ^ 5

// 1 <= x <= 10^9

// 1 <= ai <= 10^9

// Output Format

// Print one integer — the index of the shop he needs to visit.

// If such shop doesn't exist, print "Impossible";

// Sample Input 0

// 5 3
// 1 2 3 4 5
// Sample Output 0

// 3
// Explanation 0

// He can go to shop 3, 4 or 5 to buy x chocolates. Out of which shop-3 has the smallest index.




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
