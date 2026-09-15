class Solution {
  public:
      int sumSubarrayMins(vector<int>& arr) {
          int n = arr.size();
          long long ans = 0;
          int MOD = 1e9 + 7;
  
          vector<int> left(n);
          vector<int> right(n);
  
          stack<int> st;
  
          // Previous Smaller Element
          for(int i = 0; i < n; i++)
          {
              while(!st.empty() && arr[st.top()] > arr[i])
              {
                  st.pop();
              }
  
              if(st.empty())
                  left[i] = -1;
              else
                  left[i] = st.top();
  
              st.push(i);
          }
  
          // Clear stack
          while(!st.empty())
              st.pop();
  
          // Next Smaller Element
          for(int i = n - 1; i >= 0; i--)
          {
              while(!st.empty() && arr[st.top()] >= arr[i])
              {
                  st.pop();
              }
  
              if(st.empty())
                  right[i] = n;
              else
                  right[i] = st.top();
  
              st.push(i);
          }
  
          // Contribution
          for(int i = 0; i < n; i++)
          {
              int leftChoices = i - left[i];
              int rightChoices = right[i] - i;
  
              ans = (ans + (long long)arr[i] * leftChoices * rightChoices) % MOD;
          }
  
          return ans;
      }
  };