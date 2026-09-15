class Solution {
  public:
      long long subArrayRanges(vector<int>& nums) {
  
          int n = nums.size();
  
          vector<int> pse(n);
          vector<int> nse(n);
          vector<int> pge(n);
          vector<int> nge(n);
  
          stack<int> st;
          for (int i = 0; i < n; i++) {
  
              while (!st.empty() && nums[st.top()] > nums[i]) {
                  st.pop();
              }
  
              if (st.empty())
                  pse[i] = -1;
              else
                  pse[i] = st.top();
  
              st.push(i);
          }
  
          while (!st.empty())
              st.pop();
  
  
          for (int i = n - 1; i >= 0; i--) {
  
              while (!st.empty() && nums[st.top()] >= nums[i]) {
                  st.pop();
              }
  
              if (st.empty())
                  nse[i] = n;
              else
                  nse[i] = st.top();
  
              st.push(i);
          }
  
          while (!st.empty())
              st.pop();
  
          for (int i = 0; i < n; i++) {
  
              while (!st.empty() && nums[st.top()] < nums[i]) {
                  st.pop();
              }
  
              if (st.empty())
                  pge[i] = -1;
              else
                  pge[i] = st.top();
  
              st.push(i);
          }
  
          while (!st.empty())
              st.pop();
  
          for (int i = n - 1; i >= 0; i--) {
  
              while (!st.empty() && nums[st.top()] <= nums[i]) {
                  st.pop();
              }
  
              if (st.empty())
                  nge[i] = n;
              else
                  nge[i] = st.top();
  
              st.push(i);
          }
  
          long long ans = 0;
  
          for (int i = 0; i < n; i++) {
  
              long long minContribution =
                  1LL * nums[i] *
                  (i - pse[i]) *
                  (nse[i] - i);
  
              long long maxContribution =
                  1LL * nums[i] *
                  (i - pge[i]) *
                  (nge[i] - i);
  
              ans += maxContribution - minContribution;
          }
  
          return ans;
      }
  };