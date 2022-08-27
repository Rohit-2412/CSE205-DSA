/*
Consider a physical trainer is arranging the students for physical training in a school. There are N students standing in a row for physical training. He wants to insert a student with average height between the two students who are having odd height standing in consecutive. Write a program for a physical trainer so that he can get the desired sequence of students.

Example: if the 5 students are having values: 3 6 5 9 7 then 5 and 9 are the students with odd height so the student with height 7 (average of 5 and 9) should be inserted between 5 and 9. Similarly, 9 and 7 are the 2 students with odd heights so student with height 8 should be inserted between 9 and 7.

Output: 3 6 5 7 9 8 7

Input Format

The first line will be containing one Integer representing a number of students N. The second line will contain N integers representing the heights of the students.

Constraints

N>2 && N<20

Output Format

The desired sequence of students after inserting students having the average height of two students with odd height standing in consecutive in between them.

Sample Input 0

10
4 7 9 8 5 7 6 5 2 4
Sample Output 0

4 7 8 9 8 5 6 7 6 5 2 4
Sample Input 1

1
Sample Output 1

Invalid Input
*/
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main()
{
    int n = 8;
    cin >> n;
    if (n <= 2 or n >= 20)
    {
        cout << "Invalid Input";
        exit(0);
    }
    vi arr(n);

    for (auto &i : arr)
    {
        cin >> i;
    }

    vi res;
    for (int i = 0; i < n - 1; i++)
    {
        int a = arr[i];
        int b = arr[i + 1];
        if (a % 2 != 0 and b % 2 != 0)
        {
            res.push_back(a);
            res.push_back((a + b) / 2);
        }
        else
        {
            res.push_back(a);
        }
    }
    res.push_back(arr[n - 1]);

    for (auto it : res)
        cout << it << " ";
    cout << endl;

    return 0;
}
