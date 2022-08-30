#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v;
    string x;
    while (n--)
    {
        cin >> x;
        v.push_back(x);
    }

    int idx;
    cin >> idx;

    string key;
    cin >> key;

    if ((idx - 1) < 0)
    {
        cout << "Invalid Position";
        exit(0);
    }
    idx--;
    vector<string>::iterator it = v.begin();
    while (idx--)
        it++;

    v.insert(it, key);

    for (long unsigned int i = 0; i < v.size(); i++)
    {
        cout << v[i];
        if (i != v.size())
            cout << "\t";
    }

    return 0;
}
