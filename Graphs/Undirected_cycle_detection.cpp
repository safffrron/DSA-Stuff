#include<bits/stdc++.h>

bool bfs_detection(int node , map<int,list<int>> &adj , vector<bool>&visited)
{
    queue<int> q;
    map<int,int> parent;

    parent[node]=-1;
    visited[node]=true;
    q.push(node);

    while(!q.empty())
    {
        int front = q.front();
        q.pop();
        for(auto i : adj[front])
        {
            if(visited[i] && i != parent[front] )
            {
                return true;
            }
            else if ( !visited[i])
            {
                parent[i]=front;
                visited[i]=true;

                q.push(i);
            }

        }
    }
    return false;

}

bool dfs_detection(int node , int parent, map<int,list<int>> &adj , vector<bool>&visited)
{
    visited[node]=true;
    for(auto i : adj[node])
    {
        if(!visited[node])
        {
            dfs_detection(i,node,adj,visited);
        }
        else if(parent != node)
        {
            return true;
        }
    }
    return false;
}

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // make adj list 
    map<int,list<int>> adj;
    for(int i =0 ; i<m ;i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool>visited(n,false);

    
    for(int i=0 ; i<n ;i++)
    {
        if(!visited[i])
        {
            if (bfs_detection(i, adj, visited)) 
            {
                return "Yes";
            }
        }
    }
    return "No";
}
