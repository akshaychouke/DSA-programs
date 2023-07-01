#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "Enter the numbers of nodes and edges " << endl;
    int n, m;
    cin >> n >> m;
    // adjacency list for undirected graph
    // time complexity: O(2E)
    vector<int> adj[n + 1];

    cout << "Enter the  adjency elements" << endl;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    for (int i = 1; i <= n; i++) {
    cout << "Adjacent vertices of node " << i << ": ";
    for (int j = 0; j < adj[i].size(); j++) {
        cout << adj[i][j] << " ";
    }
    cout << endl;
}

    return 0;
}