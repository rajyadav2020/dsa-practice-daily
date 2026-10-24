class Solution {
  private:
  bool dfs(int src, vector<int>&color , vector<vector<int>>&adj)
  {
      for(auto it: adj[src] )
      {
          if(color[it] == -1)
          {
              color[it] = !color[src];
              
              if(!dfs(it,color,adj))
              {
                  return false;
              }
          }
          else if(color[it] == color[src])
          {
              return false;
          }
      }
      return true;
  }
public:
  bool isBipartite(int V, vector<vector<int>> &edges) {
      // Code here
      vector<int>color(V,-1);
      vector<vector<int>>adj(V);
      
      for(auto &edge : edges)
      {
          int u = edge[0];
          int v = edge[1];
          
          adj[u].push_back(v);
          adj[v].push_back(u);
      }
      //handling the connected components
      for(int i=0 ; i<V;i++)
      {
          if(color[i] == -1)
          {
              color[i] = 0;
              
              if(!dfs(i,color,adj))
              {
                  return false;
              }
          }
      }
      return true;
      
      
  }
};