// Create the graph
/*
          1----2
          |    |
          |    |       3
          |    |
          5----4


*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void Edge(vector<int> adj[], int a, int b)
{
    adj[a].push_back(b);
    adj[b].push_back(a);
}

void BFSGRAPH(int a, vector<int> adj[], vector<bool> &Visited)
{
    list<int> q;
    Visited[a] = true;
    q.push_back(a);
    while (!q.empty())
    {
        a = q.front();
        cout << a << " ";
        q.pop_front();
        int n = adj[a].size();
        for (int i = 0; i != n; i++)
        {
            if (!Visited[adj[a][i]])
            {
                Visited[adj[a][i]] = true;
                q.push_back(adj[a][i]);
            }
        }
    }
}
int main()
{
    int n = 9;
    vector<int> adj[n];

    Edge(adj, 1, 5);
    Edge(adj, 1, 2);
    Edge(adj, 2, 3);
    Edge(adj, 2, 4);
    Edge(adj, 3, 2);
    Edge(adj, 3, 4);
    Edge(adj, 5, 1);
    Edge(adj, 5, 2);
    Edge(adj, 5, 4);
  

    vector<bool> Visited(n, false);
    for (int u = 1; u < n; u++)
        if (Visited[u] == false)
            BFSGRAPH(u, adj, Visited);

    return 0;
}