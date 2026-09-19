class Solution {
  public:
      string removeKdigits(string num, int k) {
          stack<char> st;
  
          for (char ch : num) {
  
              while (!st.empty() && k > 0 &&
                     st.top() > ch) {
                  st.pop();
                  k--;
              }
  
              st.push(ch);
          }
  
          // If k is still remaining,
          // remove digits from the end
          while (k > 0) {
              st.pop();
              k--;
          }
  
          // Build result in correct order
          string res = "";
  
          while (!st.empty()) {
              res += st.top();
              st.pop();
          }
  
          reverse(res.begin(), res.end());
  
          // Remove leading zeros
          int i = 0;
  
          while (i < res.size() && res[i] == '0') {
              i++;
          }
  
          res = res.substr(i);
  
          if (res.empty()) {
              return "0";
          }
  
          return res;
      }
  };