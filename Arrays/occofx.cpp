class Solution {
  public:
      vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
          int n = nums.size();
          map<int , vector<int>> m ;
  
          for(int i=0 ; i<n; i ++)
          {
              m[nums[i]].push_back(i);
          }
  
          vector<int>ans;
          for(int i=0 ; i<queries.size();i++)
          {
              if(queries[i]> m[x].size())
              {
                  ans.push_back(-1);
  
              }
              else{
                  ans.push_back(m[x][queries[i] - 1]);
              }
          }
          return ans;
          
      }
  };