#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define nl cout << endl;
const int N = 1e5 + 7, MOD = 1e9 + 7;

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

int *merge(int a[], int n, int b[], int m)
{
    int i = 0, j = 0, k = 0;
    int *c = new int[n + m]{0};
    while (i < n && j < m)
    {
        if (a[i] < b[j])
            c[k++] = a[i++];

        else
            c[k++] = b[j++];
    }

    while (i < n)
        c[k++] = a[i++];

    while (j < m)
        c[k++] = b[j++];

    return c;
}

int main()
{
    int a[] = {1, 3, 5, 12, 14};
    int b[] = {2, 4, 7, 9, 10, 13, 15, 20};

    int *c = merge(a, 5, b, 8);

    show(a, 5);
    show(b, 8);
    show(c, 13);
    return 0;
}