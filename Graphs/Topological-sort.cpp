#include <bits/stdc++.h> 

void dfs(int node,vector<int>& visited,vector<vector<int>> &adj,vector<int>& ans )
{
    visited[node]=1;
    
    for ( auto i : adj[node])
    {
        if(!visited[i])
        {
            dfs(i,visited , adj , ans );
            
        }
    }
    ans.push_back(node);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  
{
    // Adj list
    vector<vector<int>> adj(v);
    for(auto i : edges)
    {
        int u = i[0];
        int v = i[1];

        adj[u].push_back(v);
    }

    vector<int> ans;
    vector<int> visited(v,0);
    for(int i=0 ; i<v ; i++)
    {
        if(!visited[i])
        {
            dfs(i,visited , adj , ans);
        }
    }
    reverse(ans.begin(),ans.end());
    // for(auto i : ans )
    // {
    //     cout<<i << " ";
    // }
    return ans;

}
