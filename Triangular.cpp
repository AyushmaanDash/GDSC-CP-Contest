// Bob is going to watch a movie with his friends. In the theater, there are seats numbered from 1 to 10^6. Out of those, Bob's friend has booked the seats numbered from l to r(inclusive).

// Bob only likes to sit on seats whose seat number is an triangular number:-

// https://en.wikipedia.org/wiki/Triangular_number

// You need to determine the number of seats that bob can sit on.

// Input Format

// The first line of input contains t - the number of testcases.

// Each test case contains two integers l and r.

// Constraints

// 1 <= t <= 2 * 10 ^ 5

// 1 <= l <= r <= 10^6

// Output Format

// For each test case, print one integer — the number of seats Bob can sit on.

// Sample Input 0

// 1
// 1 10
// Sample Output 0

// 4
// Explanation 0

// In between 1 and 10(inclusive), there are 4 triangular number: 1, 3, 6, 10





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
