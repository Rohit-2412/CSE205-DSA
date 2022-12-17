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

// DFS Traversal

int main()
{
    int v, e;
    cin >> v >> e;
    // create a 2d vector of size v*v with all elements 0
    vvi adj(v, vi(v, 0));
    // take edge as input
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x][y] = 1;
    }
    // print the adjacency matrix
    // cout << "Adjacency matrix" << endl;
    // for (int i = 0; i < v; i++)
    // {
    //     for (int j = 0; j < v; j++)
    //     {
    //         cout << adj[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // DFS traversal
    stack<int> s;
    vi vis(v, 0);
    s.push(6);
    vis[6] = 1;
    while (!s.empty())
    {
        int node = s.top();
        s.pop();
        cout << node << " ";
        for (int i = 0; i < v; i++)
        {
            if (adj[node][i] == 1 && vis[i] == 0)
            {
                s.push(i);
                vis[i] = 1;
            }
        }
    }
    // check for disconnected graph
    for (int i = 0; i < vis.size(); i++)
    {
        if (vis[i] == 0)
        {
            s.push(i);
            vis[i] = 1;
            while (!s.empty())
            {
                int node = s.top();
                s.pop();
                cout << node << " ";
                for (int i = 0; i < v; i++)
                {
                    if (adj[node][i] == 1 && vis[i] == 0)
                    {
                        s.push(i);
                        vis[i] = 1;
                    }
                }
            }
        }
    }
    cout << endl;

    return 0;
}