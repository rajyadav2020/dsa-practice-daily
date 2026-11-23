class Solution {
  public:
      int robhouse(vector<int>&nums)
      {
          int n = nums.size();
          int prev = nums[0];
          int prev2 = 0;
  
          for(int i=1;i<n;i++)
          {
              int pick = nums[i];
              if(i>1)
              {
                  pick+=prev2;
              }
              int notpick = 0 + prev;
  
              int cur = max(pick , notpick);
              prev2 = prev;
              prev = cur;
          }
          return prev;
      }
      int rob(vector<int>& nums) {
          int n = nums.size();
          if(n==1) return nums[0];
          vector<int>arr1;
          vector<int>arr2;
  
          for(int i=0; i<n-1;i++)
          {
              arr1.push_back(nums[i]);
          }
          for(int i=1 ; i< n;i++)
          {
              arr2.push_back(nums[i]);
          }
  
          return max(robhouse(arr1),robhouse(arr2));
          
      }
  };