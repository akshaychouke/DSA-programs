#include <iostream>
using namespace std;
int main()
{
    // n = number of nodes(vertex) and m = number of edges
    int n, m;
    cout << "Enter the numbers of nodes and edges " << endl;
    cin >> n >> m;
    int adj[n + 1][n + 1];

    cout << "Enter the  adjency elements and their weights" << endl;

    for (int i = 0; i < m; i++)
    {
        int u, v,wt;
        cin >> u >> v >> wt;
        adj[u][v] = wt;
        adj[v][u] = wt; // this statement will be removed in case of directed graph
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
