class Solution {
  public:
      double findMaxAverage(vector<int>& nums, int k) {
          int n = nums.size();
          int sum = 0 , m;
  
          for(int i=0; i<k;i++)
          {
              sum+=nums[i];
          }
          m = sum;
          for(int i=k;i<n;i++)
          {
               sum = sum + nums[i] - nums[i-k];
              if(m<sum)
              {
                  m = sum;
              }
  
          }
  
          return (double)m/k;
      }
  };