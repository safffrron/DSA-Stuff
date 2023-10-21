void bfs(int node, vector<vector<int>> &adj, vector<bool> &visited, queue<int> &q, vector<int> &ans) {
    if (visited[node]) 
    {
        return;
    }
    visited[node] = true;

    q.push(node);
    ans.push_back(node);
    while (!q.empty()) 
    {
        int current = q.front();
        q.pop(); 
        for (auto neighbor : adj[current]) 
        {
            if (!visited[neighbor]) 
            {
                visited[neighbor] = true; 
                q.push(neighbor); 
                ans.push_back(neighbor);
            }
        }
    }
}


vector<int> bfsTraversal(int n, vector<vector<int>> &adj) {
    vector<bool> visited(n, false);
    vector<int> ans;
    queue<int> q;

    for (int i = 0; i < n; i++) 
    {
        if (!visited[i]) 
        {
            bfs(i, adj, visited, q, ans);
            break;
        }
    }
    return ans;
}
