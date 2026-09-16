class Solution {
  public:
      vector<int> asteroidCollision(vector<int>& asteroids) {
  
          stack<int> st;
  
          for (int asteroid : asteroids) {
  
              bool alive = true;
  
              // Collision is possible only:
              // positive stack top + negative current asteroid
              while (alive && !st.empty() &&
                     st.top() > 0 && asteroid < 0) {
  
                  if (st.top() < abs(asteroid)) {
                      // Stack top explodes
                      st.pop();
                  }
                  else if (st.top() == abs(asteroid)) {
                      // Both explode
                      st.pop();
                      alive = false;
                  }
                  else {
                      // Current asteroid explodes
                      alive = false;
                  }
              }
  
              // Current asteroid survived
              if (alive) {
                  st.push(asteroid);
              }
          }
  
          // Convert stack to answer
          vector<int> ans(st.size());
  
          for (int i = st.size() - 1; i >= 0; i--) {
              ans[i] = st.top();
              st.pop();
          }
  
          return ans;
      }
  };