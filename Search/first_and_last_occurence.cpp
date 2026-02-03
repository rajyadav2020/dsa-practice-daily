class Solution {
  public:
      int firstocc(vector<int>& nums, int target){
          int ans = -1;
          int st = 0;
          int end = nums.size()-1;
          while(st<=end){
              int mid = (st+end)/2;
              if(nums[mid]==target)
              {
                  ans = mid;
                  end = mid-1;
              }
              else if(target>nums[mid])
              {
                  st = mid+1;
              }
              else
              {
                  end = mid-1;
              }
          }
          return ans;
      }
          int lastocc(vector<int>& nums, int target){
          int ans = -1;
          int st = 0;
          int end = nums.size()-1;
          while(st<=end){
              int mid = (st+end)/2;
              if(nums[mid]==target)
              {
                  ans = mid;
                  st = mid+1;
              }
              else if(target>nums[mid])
              {
                  st = mid+1;
              }
              else
              {
                  end = mid-1;
              }
          }
          return ans;
      }
  
      vector<int> searchRange(vector<int>& nums, int target) {
          int ft = firstocc(nums,target);
          int lo = lastocc(nums,target);
  
          return {ft,lo};
  
          
      }
  };