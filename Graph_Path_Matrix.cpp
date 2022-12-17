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
            os << col << " ";
        }
        os << endl;
    }
    return os;
}
int main()
{
    int v, e;
    cin >> v >> e;
    vvi adj(v, vi(v, 0));
    rep(i, 0, e)
    {
        int x, y;
        cin >> x >> y;
        adj[x][y] = 1;
    }

    // display path matrix using floyyd algorithm
    rep(k, 0, v)
    {
        rep(i, 0, v)
        {
            rep(j, 0, v)
            {
                adj[i][j] = adj[i][j] || (adj[i][k] && adj[k][j]);
            }
        }
        cout << "Adjacency matrix " << k + 1 << endl;
        cout << adj;
        cout << endl;
    }
    return 0;
}