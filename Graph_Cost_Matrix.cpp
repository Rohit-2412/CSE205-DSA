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
// overload << operator for printing 2d vector
ostream &operator<<(ostream &os, const vvi &v)
{
    for (auto &row : v)
    {
        for (auto &col : row)
        {
            os << setw(4) << col << " ";
        }
        os << endl;
    }
    return os;
}
int main()
{
    int v, e, w;
    cin >> v >> e;

    // create a 2d vector of size v*v with all elements 0
    vvi adj(v, vi(v, 0));

    // take edge and weight as input
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y >> w;
        adj[x][y] = w;
    }

    // fill the diagonal elements with 0, and unreachable elements with INT_MAX
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            if (i == j)
                adj[i][j] = 0;
            else if (adj[i][j] == 0)
                adj[i][j] = 1000;
        }
    }
    cout << "Initial cost matrix" << endl;
    cout << adj;
    cout << endl;
    // display cost matrix using flloyd warshall algorithm
    for (int k = 0; k < v; k++)
    {
        for (int i = 0; i < v; i++)
        {
            for (int j = 0; j < v; j++)
            {
                adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
            }
        }
        cout << "Cost matrix " << k + 1 << endl;
        cout << adj;
        cout << endl;
    }

    return 0;
}