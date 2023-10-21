void dfs(int& node ,vector<vector<int>>& adj,vector<int>& value, vector<bool>& visited )
{
    value.push_back(node);
    visited[node]=1;

    for(auto i : adj[node])
    {
        if(!visited[i])
        {
            dfs(i,adj,value,visited);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // prepare adj list 
    vector<vector<int>> adj(V);
    for(int i =0 ;i< E;i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> visited(V , 0);
    vector<vector<int>> ans;
    for(int i = 0 ; i< V ; i++)
    {
        vector<int> value;
        if(!visited[i])
        {
            dfs(i,adj,value,visited);
            ans.push_back(value);
        }
        
    }
    return ans;
}
