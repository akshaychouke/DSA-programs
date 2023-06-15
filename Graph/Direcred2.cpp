#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "Enter the numbers of nodes and edges " << endl;
    int n, m;
    cin >> n >> m;
    // adjacency list for directed graph
    // time complexity: O(2E)
    vector<int> adj[n + 1];
    cout << "Enter the  adjency elements" << endl;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    return 0;
}