//Problem: Rotate Array
//Platform: Leetcode
//Difficulty: Medium

//Approach used here is Reverse array method, we used an in place algorithm with O(n) time complexity and O(1) extra space
//base case is simple if k is greater than the array size,rotating more than n times is useless so to rotate the array we reversed it in three steps
//1. Reversing the full array
//2.Reversing the first k elements
//3.Reversing remaining elements 

class Solution {
  public:
      void reverse(vector<int>& nums,int start,int end){
          while(start<end){
              swap(nums[start],nums[end]);
              start++;
              end--;
          }
      }
  
  
      void rotate(vector<int>& nums, int k) {
          int n = nums.size();
          k = k%n;
  
          reverse(nums,0,n-1);
          reverse(nums,0,k-1);
          reverse(nums,k,n-1);
          
      }
  };