/*
LinearSearch_1_22176locked
Problem
Submissions
Leaderboard
Let us assume that a child went to a shop to purchase N BROWN chocolates and while packing chocolates shopkeeper might put M white chocolate instead of brown chocolate. Find out the location of white chocolate in the box and return the location. (index of array begins from 0). In case if there is no white chocolate then print -1.Write a program for the same and implement all test cases.

Input Format

First Line will contain 1 integer value nn, where nn is total number of chocolates Second Line will contain nn characters (where B means brown chocolate and W means white chocolate)

Constraints

Note 4< nn <20, where nn is total number of chocolates.

Output Format

First Line will contain M integers representing index values where white chocolate is present Second Line contain one integer represnting value of M

Sample Input 0

10
BBBBBWBBBB
Sample Output 0

5
1
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;

    if (n <= 4 || n >= 20)
    {
        return 0;
    }
    char s[n];
    string temp;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int a = 0; // count of W
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        char c = s[i];
        if (c == 'W')
        {
            cout << i << " ";
            found = true;
            a += 1;
        }
    }
    if (!found)
        cout << -1;
    cout << endl
         << a;
    return 0;
}