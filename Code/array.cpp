#include <bits/stdc++.h>
using namespace std;

void show(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "      ";
    }
}

void insertElement(int *arr, int cap, int &size, int loc, int item)
{
    if (cap < size)
    {
        cout << "Insertion is not possible becouse Array Overflow.. !!" << endl;
        return;
    }

    int i = size + 1;
    while (i >= loc)
    {
        arr[i] = arr[i - 1];
        i--;
    }
    arr[loc] = item;
    size++;
}
int sum(int n)
{
    int res = 0;
    int x = 0;

    while (n != 0)
    {
        x = n % 10;
        res += x;
        n /= 10;
    }
    return res;
}
int main()
{
    int capacity, initialSize;
    cin >> capacity;
    int *arr = new int[capacity + 1]{0};

    cin >> initialSize;

    for (int i = 0; i < initialSize; i++)
    {
        cin >> arr[i];
    }

    int item, idx;
    cin >> item;
    idx = sum(item);

    while (idx >= 10)
    {
        idx = sum(idx);
    }

    insertElement(arr, capacity, initialSize, idx, item);
    show(arr, capacity);

    return 0;
}

// 12      23      0       0       0       0       0       44      0
// 12      23      0       0       0       0       0       44      0

/*
#include <bits/stdc++.h>
using namespace std;

void show(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>=10)
            cout << arr[i]<<"      ";
        else
            cout<<arr[i]<<"       ";
    }
}

void insertElement(int *arr, int cap, int &size, int loc, int item)
{
    if (cap < size)
    {
        cout << "Insertion is not possible becouse Array Overflow.. !!" << endl;
        return;
    }

    int i = size + 1;
    while (i >= loc)
    {
        arr[i] = arr[i - 1];
        i--;
    }
    arr[loc] = item;
    size++;
}
int sum(int n)
{
    int res = 0;
    int x = 0;

    while (n != 0)
    {
        x = n % 10;
        res += x;
        n /= 10;
    }
    return res;
}
int main()
{
    int capacity, initialSize;
    cin >> capacity;
    int *arr = new int[capacity]{0};

    cin >> initialSize;

    for (int i = 0; i < initialSize; i++)
    {
        cin >> arr[i];
    }

    int item, idx;
    cin >> item;
    idx = sum(item);

    while (idx >= size)
    {
        idx = sum(idx);
    }

    insertElement(arr, capacity, initialSize, idx-1, item);
    show(arr, capacity);

    return 0;
}
*/