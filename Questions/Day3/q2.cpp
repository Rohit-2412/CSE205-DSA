/*
Assume a student is having 8 lectures on Monday of different courses listed as JAVA, Python, DBMS and DataStructures. Find out how many times JAVA lecture is repeated on Monday.

Constraints: 1. Size of the array should be 8

Output: JAVA lecture is repeating 3 times

Sample Case 1: Input: Total 8 lectures on Monday JAVA JAVA DataStructures DBMS JAVA JAVA Python DataStructures Output: JAVA lecture is repeating 4 times

Sample Case 2: Input: Total 8 lectures on Monday JAVA JAVA DataStructures DBMS JAVA JAVA Python JAVA Output: JAVA lecture is repeating 5 times

Sample Case 3: Input: Total 8 lectures on Monday Python Python DataStructures DBMS Python Python DBMS Python Output: No JAVA Lecture

Input Format

Example:

Input: Total 8 lectures on Monday JAVA Python DataStructures DBMS JAVA JAVA Python DataStructures

Constraints

Constraints: 1. Size of the array should be 8 2. All subjects should be listed atleast once

Output Format

Output:

JAVA lecture is repeating 3 times

Sample Case 1: Input: Total 8 lectures on Monday JAVA JAVA DataStructures DBMS JAVA JAVA Python DataStructures

Output: JAVA lecture is repeating 4 times

Sample Input 0

Total 8 lectures on Monday
JAVA JAVA DataStructures DBMS JAVA JAVA Python DataStructures
Sample Output 0

JAVA lecture is repeating 4 times
*/
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main()
{
    string str;
    getline(cin, str);
    getline(cin, str);
    stringstream ss(str);
    string s;
    vector<string> arr;
    int count = 0;
    while (ss >> s)
    {
        arr.push_back(s);
    }
    for (auto it : arr)
        if (it == "JAVA")
        {
            count += 1;
        }
    if (count != 0)
        printf("JAVA lecture is repeating %d times", count);
    else
    {
        printf("No JAVA Lecture");
    }
    return 0;
}