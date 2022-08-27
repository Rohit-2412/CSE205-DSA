/*
To insert the element to a specific location. The specific location will be calculate based on given following condition 1. find the sum of newly inserted element, the result of the sum is the location of the newly inserted element. 2. If the sum is greater than the size of the array then repeat the condition one again. 3. After inserting the new element, the number of elements should be increased by one.

Input Format

Sample 1: Line 1 : Enter the size of Array : 9

Line 2 : How number of element to insert in to array :5

Line 3 : Enter 5 number of element :

Line 4 : 12 34 87 32 11

Line 5 : 12 34 87 32 11 0 0 0 0

Line 6 : Enter the number to insert in to array: 65

Line 7 : The Element 65 inserted at the location : 2

Line 8 : 12 65 34 87 32 11 0 0 0

Sample 2:

Line 1 : Enter the size of Array : 9

Line 2 : How number of element to insert in to array :2

Line 3 : Enter 2 number of element :

Line 4 : 12 23

Line 5 : 12 23 0 0 0 0 0 0 0

Line 6 : Enter the number to insert in to array: 44

Line 7 : The Element 44 inserted at the location : 8

Line 8 : 12 23 0 0 0 0 0 44 0

Sample 3 Line 1 : Enter the size of Array : 3

Line 2 : How number of element to insert in to array :3

Line 3 : Enter 3 number of element :

Line 4 : 12 34 65

Line 5 : 12 34 65

Line 6 : Enter the number to insert in to array: 55

Line 7 : Insertion is not possible becouse Array Overflow.. !!

Line 8 : 12 34 65

Constraints

The length of array (size) should be 0 =< L < 100

Output Format

The list of array element should be display in forwarding order before insertion and after insertion operation.

Sample Input 0

9
2
12    23
44
Sample Output 0

12      23      0       0       0       0       0       44      0
Explanation 0

Enter the size of Array : 9
How number of element to insert in to array :2
Enter 2 number of element : 12 23 12 23 0 0 0 0 0 0 0
Enter the number to insert in to array: 44
The Element 44 inserted at the location : 8
 12 23 0 0 0 0 0 44 0
*/
#include <iostream>
using namespace std;
int getSum(int n, int size)
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    if (size < sum)
    {
        sum = getSum(sum, size);
    }
    return sum;
}
int main()
{

    int size, n, i, elem;
    cin >> size >> n;
    int arr[size + 1];
    for (i = 0; i < size; i++)
    {
        if (i < n)
        {
            cin >> arr[i];
        }
        else
        {
            arr[i] = 0;
        }
    }
    cin >> elem;
    if (size > n)
    {
        int sum = getSum(elem, size);

        for (i = size; i >= sum; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[i] = elem;
    }
    else
    {
        cout << "Insertion is not possible becouse Array Overflow.. !!" << endl;
    }

    for (i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i != size - 1)
        {
            int spc = 8 - to_string(arr[i]).length();
            for (int k = 0; k < spc; k++)
            {
                cout << " ";
            }
        }
    }
}