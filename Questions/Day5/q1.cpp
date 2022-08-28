/*
Array_Deletion_1_27947locked
Problem
Submissions
Leaderboard
Consider Aman is visiting Nehru Zoo. She has seen there are N elephants standing in a row. She wants to remove the elephants having the same height standing in consecutive.Write a program for Aman so that she can get the desired sequence of elephants.

Input Format

The first line will be containing one Integer representing a number of elephants N.
The second line will contain N integers representing the heights of the elephants.

Constraints

N>2 && N<30

Output Format

The desired sequence of elephants after removing elephants having the same height standing in consecutive.

Sample Input 0

12
4 7 9 9 8 5 7 7 6 5 5 5
Sample Output 0

4 7 9 8 5 7 6 5
Sample Input 1

1
Sample Output 1

Invalid Input
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    if (n <= 2 || n >= 30)
    {
        cout << "Invalid Input";
        exit(0);
    }
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int curr = arr[0];
    int prev = -1;
    cout << arr[0] << " ";
    for (int i = 1; i < n - 1; i++)
    {
        curr = arr[i];
        prev = arr[i - 1];

        if (curr != prev)
            cout << arr[i] << " ";
    }
    if (curr != arr[n - 1])
        cout << arr[n - 1];
    return 0;
}