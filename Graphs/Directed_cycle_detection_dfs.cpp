#include <bits/stdc++.h>
bool dfs_detection(int node , unordered_map<int, list<int>> &adj ,unordered_map<int, bool> &visited ,unordered_map<int, bool> &dfs_visited )
{
  visited[node]=true;
  dfs_visited[node]=true;
  
  for( auto next : adj[node])
  {
    if(!visited[next])
    {
      bool temp = dfs_detection(next, adj, visited, dfs_visited);
      if(temp)
      {
        return true;
      }
    }
    else if( dfs_visited[next] )
    {
      return true;
    }
  }
  dfs_visited[node]=false;
  return false ;
}

bool bfs_detection(int node, unordered_map<int, list<int>> &adj,
                   unordered_map<int, bool> &visited,
                   unordered_map<int, bool> &dfs_visited) 
{
  

}

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) 
{
  //create adj list 
  unordered_map<int, list<int>> adj;
  for(int i=0 ; i<edges.size() ;i++)
  {
    int u = edges[i].first;
    int v =edges[i].second;

    adj[u].push_back(v);
    
  }

  //unordered_map<int, int> parent;
  unordered_map<int, bool> visited;
  unordered_map<int, bool> dfs_visited;

  
  for(int i=1;i<=n;i++)
  {
    if(!visited[i])
    {
      bool ans = dfs_detection(i , adj , visited , dfs_visited);
      if(ans)
      {
       return 1;
      }
    }
    
  }
  return 0;
}
