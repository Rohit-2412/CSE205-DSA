/*
Array_Deletion-1_16920locked
Problem
Submissions
Leaderboard
During the get together party, Liza asked all her friends to play a game where all the N friends have been asked to arrange themselves in a row and assigned some unique number.

As per the rule of the game, Liza will show a number and the friend with that number needs to get out of the row and the vacant space should be occupied by all the friends on the right side such that the sequence is not disturbed.

Example:

If there are 5 friends with the numbers 4, 8, 3, 6, 2 and Liza has shown the number 8 then the remaining friends should have the numbers: 4, 3, 6, and 2.

Input Format

First line will be the number of friends N. Second Line will be the numbers assigned to the friends from left to right. Third Line will be the number shown by Liza.

Sample Input 1:

5

4 8 3 6 2

8

Sample Output 1:

4 3 6 2

Sample Input 2:

6

7 8 5 3 1 4

4

Sample Output 2:

7 8 5 3 1

Sample Input 3:

4

2 5 3 4

6

Sample Output 3:

2 5 3 4

Constraints

All the inpouts are positive integers and numbers entered in the second line of input are non-duplicate

Output Format

Prints all the numbers after removing the number from the list

Sample Input 0

5
4 2 8 3 5
2
Sample Output 0

4 8 3 5
Explanation 0

2 is removed and the elements to the right of 2 are shifted to the left to occupy the vacant positions
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != key)
            cout << arr[i] << " ";
    }
    return 0;
}
