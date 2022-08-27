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

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter element to find: ";
    cin >> key;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("%d is found at index: %d", key, i);
            found = true;
        }
    }
    if (!found)
    {
        cout << "Element not found in the array!" << endl;
    }

    return 0;
}