// problem -->two sum -->leetcode
//difficulty:easy

//approach: here i used two pointer approach -> because two pointers only works when array is sorted

//if sum is too small , more left pointer to right
//if sum is too large , move right pointer to left
//here we stored every number of array like this (value,index) , here first -> number value ,and second ->original index

class Solution {
  public:
      vector<int> twoSum(vector<int>& nums, int target) {
          vector<pair<int,int>>arr; //arr.first ->first value and arr.second is second value
          int n = nums.size();
  
          for(int i=0;i<n;i++)
          {
              arr.push_back({nums[i],i});
          }
  
          sort(arr.begin(),arr.end());
  
          int left = 0;
          int right = n-1;
          while(left<right){
              int sum = arr[left].first + arr[right].first;
  
              if(sum==target){
                  return {arr[left].second,arr[right].second};
              }else if(sum<target){
                  left++;
              }else{
                  right--;
              }
  
          }
          return {};
  
  
          
      }
  };

//here time complexities and space complexity 
//time complexity -> O(nlogn);(because of sorting)
//space complexity -> O(n) (xtra array for storing indices)