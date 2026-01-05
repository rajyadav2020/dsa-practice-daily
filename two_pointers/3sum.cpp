//problem-> 3sum
//platform -> leetcode
//difficulty:medium

//here , we first sorted the array

//here we sorted as well as eliminated the duplicates
//we loop through the array and fix one element at a time
//if sum == 0 store the triplet
//sum<0 move left
//sum>0 more right
class Solution {
  public:
      vector<vector<int>> threeSum(vector<int>& nums) {
          vector<vector<int>> ans;
          int n = nums.size();
          
          sort(nums.begin(), nums.end());
          
          for(int i = 0; i < n; i++) {
              // skip duplicate fixed elements
              if(i > 0 && nums[i] == nums[i - 1]) continue;
              
              int left = i + 1;
              int right = n - 1;
              
              while(left < right) {
                  int sum = nums[i] + nums[left] + nums[right];
                  
                  if(sum == 0) {
                      ans.push_back({nums[i], nums[left], nums[right]});
                      
                      // skip duplicates
                      while(left < right && nums[left] == nums[left + 1]) left++;
                      while(left < right && nums[right] == nums[right - 1]) right--;
                      
                      left++;
                      right--;
                  }
                  else if(sum < 0) {
                      left++;
                  }
                  else {
                      right--;
                  }
              }
          }
          return ans;
      }
  };
  

  //time complexity: O(n2)
  //space complexity: O(1)