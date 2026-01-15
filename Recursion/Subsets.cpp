//Problem: Subsets leetcode 78
//Difficulty: medium
//approach: the approach is of backtracking either the element will be taken or not taken and the total number of subsets =  2^n which means if have 3 elements in my array than the subsets will be 8


class Solution {
  public:
  
      vector<vector<int>>result;
      void solve(int index,vector<int>& nums,vector<int>& temp){
          if(index==nums.size()){
              result.push_back(temp);
              return;
          }
  
          solve(index+1,nums,temp);
  
          temp.push_back(nums[index]);
          solve(index+1,nums,temp);
          temp.pop_back();
      }
  
  
      vector<vector<int>> subsets(vector<int>& nums) {
          vector<int>temp;
          solve(0,nums,temp);
          return result;
          
          }
  };

  //time complexity: O(2^n)