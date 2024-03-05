vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t)
{
	vector<vector<int>> adj(n);
    for(auto i : edges)
    {
        int u = i.first-1;
        int v = i.second-1;

        adj[u].push_back(v);
		adj[v].push_back(u);
    }

    vector<int> ans;
    vector<int> visited(n,0);
	vector<int> parent(n);
	queue<int> q ;

	q.push(s-1);
	visited[s-1]=1;
	while(!q.empty())
	{
		int front = q.front();
		q.pop();
		for( auto i : adj[front])
		{
			if(visited[i]) continue;
			visited[i]=1;
			q.push(i);
			parent[i]=(front);
		}
	}
	int curr = t-1;
	while(curr != s-1)
	{
		curr = parent[curr];
		ans.push_back(curr+1);
	}
	
	reverse(ans.begin() , ans.end());
	ans.push_back(t);
	// for(auto i : ans )
	// {
	// 	cout<<i<<" ";
	// }
	return ans;
}
