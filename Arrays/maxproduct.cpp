class Solution {
  public:
      int maxProduct(vector<int>& nums) {
          int n = nums.size();
          int mul = 1;
          int l =INT_MIN;
  
          for(int i=0;i<n;i++)
          {
              mul = mul*nums[i];
              l = max(mul,l);
              if(mul == 0)
              {
                  mul = 1;
              }
          }
          mul = 1;
          for(int i = n-1;i>=0;i--)
          {
              mul = mul*nums[i];
              l = max(mul,l);
              if(mul == 0)
              {
                  mul = 1;
              }
          }
  
          return l;
      }
  };