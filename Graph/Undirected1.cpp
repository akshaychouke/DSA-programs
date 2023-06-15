#include <iostream>
using namespace std;
int main()
{
    // n = number of nodes(vertex) and m = number of edges
    int n, m;
    cout << "Enter the numbers of nodes and edges " << endl;
    cin >> n >> m;
    int adj[n + 1][n + 1];

    cout << "Enter the  adjency elements" << endl;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1; // this statement will be removed in case of directed graph
    }

    // to set other elments as 0
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (adj[i][j] != 1)
            {
                adj[i][j] = 0;
            }
        }
    }

// to print matrix

cout<<"The graph matrix is"<<endl;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}
