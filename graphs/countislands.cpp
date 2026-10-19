class Solution {
  public:
      void dfs(int i, int j, vector<vector<bool>>& vis,
               vector<vector<char>>& grid, int n, int m) {
  
          // Boundary checks and validity checks
          if (i < 0 || j < 0 || i >= n || j >= m ||
              vis[i][j] || grid[i][j] != '1') {
              return;
          }
  
          vis[i][j] = true;
  
          // Explore all four directions
          dfs(i + 1, j, vis, grid, n, m);
          dfs(i - 1, j, vis, grid, n, m);
          dfs(i, j + 1, vis, grid, n, m);
          dfs(i, j - 1, vis, grid, n, m);
      }
  
      int numIslands(vector<vector<char>>& grid) {
          int n = grid.size();
  
          if (n == 0) return 0;
  
          int m = grid[0].size();
          vector<vector<bool>> vis(n, vector<bool>(m, false));
  
          int islands = 0;
  
          for (int i = 0; i < n; i++) {
              for (int j = 0; j < m; j++) {
                  if (!vis[i][j] && grid[i][j] == '1') {
                      dfs(i, j, vis, grid, n, m);
                      islands++;
                  }
              }
          }
  
          return islands;
      }
  };