// Find the length of the subarray that give us the maximum mex.

// The MEX of a set of non-negative integers is the minimal non-negative integer such that it is not in the set. For example, MEX({1,2,3}) = 0 and MEX({0,1,2,4,5}) = 3.

// If there exist multiple answers, print the smallest length.

// Input Format

// The first line of input contains n - the sizes of the array.

// The next line contains n integers, a1, a2, a3 ... an - the elements of the array.

// Constraints

// 1 <= n <= 1000

// 0 <= ai <= 10^6

// Output Format

// For each test case, print one integer — the length of the sub-array containing maximum MEX. If multiple answer exists, print the smallest one.

// Sample Input 0

// 5
// 1 2 0 4 5
// Sample Output 0

// 3
// Explanation 0

// The mex of 1, 2, 0 is 3, which is the maximum MEX we can get in the given array. The length of the subarray which has this MEX extends from index 0 to index 2, thus, have a length equal to 3.


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
