//problem - 26 -> Remove duplicates
//platform:Leetcode
//Actually this problem is based on two pointers
//here one pointer is for the count of the unique elements in the array and another one is for the iteration on to the array
//one pointere to scan the array
//and another one is to place the unique element
//pointer 1-> i ->reader pointer
//pointer 2 -> k = writer pointer

//approach or algorithm -> 1.if array size is 0, return 0;
//2.initialise with int k = 1
//3.loop from index 1 to n-1;
//4.if current element is different from the previous :
//place it at nums[k];
//increment k'
//5.return k;

class Solution {
  public:
      int removeDuplicates(vector<int>& nums) {
          int n  = nums.size();
          int k = 1;
  
          for(int i=1;i<n;i++){
              if(nums[i]!=nums[i-1])
              {
                  nums[k] = nums[i];
                  k++;
              }
          }
          return k;
  
           
      }
  };


  //time complexity:O(n);
  //space complexity (O(1))
