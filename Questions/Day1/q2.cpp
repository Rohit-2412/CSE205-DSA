/*
Count the number of lower case characters from the array of characters having alphanumeric symbol. The size of array should be greater than 0 and less than equal to 20. If size is not in the mention range than program should display “Invalid array size” without asking for the second input. And if no lower case character is present then display -1.

Input Format

Your program should take two types of inputs. First will represent size of array and second will represent elements of array. Sample Input: 6 H e L L O 2

Constraints

The length of array (L) should be 0 < L <=20

Output Format

Should display the number of lower case characters in ‘int’ form. If no such character is present then display -1. Sample Output: 1

Sample Input 0

6
H
e
L
L
O
2
Sample Output 0

1
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
    if (n <= 0 || n > 20)
    {
        cout << "Invalid array size";
        exit(0);
    }
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
            count++;
    }
    if (count == 0)
        cout << -1;
    else
        cout << count;
    return 0;
}
