#include <bits/stdc++.h>
using namespace std;
// bubble sort
// algorithm - find one element from left to right and place every element to its correct position (between two numbers)

void show(int *arr, int size)
{
    cout << '[';
    for (int i = 0; i < size; i++)
    {

        cout << arr[i];
        if (i != size - 1)
            cout << ", ";
    }
    cout << "]\n";
}

int main()
{
    int n = 10;
    int array[n] = {5, 6, 7, 4, 3, 2, 1, 10, 8, 0};
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> array[i];
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            // for increasing order
            if (array[i] < array[j])
                swap(array[i], array[j]);
        }
    }

    show(array, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            // for decreasing order
            if (array[i] > array[j])
                swap(array[i], array[j]);
        }
    }
    show(array, n);
    return 0;
}