#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n = 10;
    if (n < 10 or n > 50)
    {
        return 0;
    }
    int arr[n];

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    for (int i = 0; i < 10; i++)
    {
        if (key == arr[i])
        {
            cout << i + 1;
            return 0;
        }
    }
    cout << -1;

    return 0;
}
