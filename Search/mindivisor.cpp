class Solution {
  public:
      bool isValid(vector<int>& nums, int mid, int threshold)
      {
          long long sum = 0;
          for(int i=0;i<nums.size();i++)
          {
              sum+=(nums[i]+mid-1)/mid;
          }
          return sum<=threshold;
      }
  int smallestDivisor(vector<int>& nums, int threshold) {
      int low = 1;
      int high = *max_element(nums.begin(), nums.end());
      int ans = -1; // Create a variable to store the best valid answer
  
      while(low <= high) {
          int mid = low + (high - low) / 2;
          
          if(isValid(nums, mid, threshold)) {
              ans = mid;      // 1. It works! Record it.
              high = mid - 1; // 2. Can we find a smaller one? Search the left half.
          } else {
              // It didn't work. The divisor was too small (making the sum too big).
              low = mid + 1;  // 3. Search the right half for a bigger divisor.
          }
      }
      
      return ans; // Return the smallest valid answer we recorded
  }
  };