#include <bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int n, int key)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
    }

    return -1;
}

int main()
{

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    if (binarySearch(a, 11, 50) != -1)
        cout << "Found at index: " << binarySearch(a, 11, 5);
    else
        cout << "Not found" << endl;
    return 0;
}