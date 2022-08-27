/*
Akash got an interesting assignment. He got K balls, every ball has its diameter inscribed. Write a programming solution, to help akash to find the largest ball. He is supposed to solve assignment N times.

Input Format

1st line contain N(nos. of problem)
2nd line contain space separated diameter from K balls
Constraints

K=6
N>0 & N<5
Output Format

Return diameter of highest ball. For Every assignment, output should be on a new line.

Sample Input 0

2
4 1 8 34 23 18
34 23 45 11 7 55
Sample Output 0

34
55
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp;
    int maxElement = INT_MIN;
    while (n--)
    {
        int j = 6;
        while (j--)
        {
            cin >> temp;
            if (maxElement < temp)
            {
                maxElement = temp;
            }
        }
        cout << maxElement << endl;
    }
    return 0;
}