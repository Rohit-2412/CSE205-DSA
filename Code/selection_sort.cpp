#include <bits/stdc++.h>
using namespace std;

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

int minValueIndex(int arr[], int i, int n)
{
    int minValue, minIdx;
    minValue = arr[i];
    for (minIdx = i; i < n; i++)
    {
        if (minValue > arr[i])
        {
            minValue = arr[i];
            minIdx = i;
        }
    }
    return minIdx;
}

void sort(int arr[], int n)
{
    int temp, minIdx, i;
    for (i = 0; i <= n - 2; i++)
    {
        minIdx = minValueIndex(arr, i, n);
        swap(arr[i], arr[minIdx]);
        show(arr, n);
    }
}
int main()
{
    int arr[] = {1, 3, 2, 5, 4, 7, 0};
    sort(arr, 7);
    show(arr, 7);
    return 0;
}