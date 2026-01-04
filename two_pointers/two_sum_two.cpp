//problem: 2 sum - II
//platform: leetcode
//difficulty:medium
//approach:this is the purely two pointers problem ,here the array is already sorted which means no need to sort the array
//login is simple 
//if(sum==target) answer found
//sum<target -> move left
//sum>target ->move right

class Solution {
  public:
      vector<int> twoSum(vector<int>& nums, int target) {
          int n = nums.size();
  
          int left = 0;
          int right = n-1;
  
  
          while(left<right)
          {
              int sum = nums[left] + nums[right];
              if(sum==target){
                  return{left+1,right+1};
              }
  
              else if(sum>target){
                  right--;
              }else{
                  left++;
              }
          }
          return {};
          
      }
  };

//time complexity: O(n)
//space complexity: O(1)