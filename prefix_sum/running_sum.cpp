//problem: running_sum_of_1d array
//difficulty:easy
//Basically, this is the type of prefix sum of array
// approach is used , here i took the variable sum which
// is initially zero and that sum will compute the sum of the next upcoming elements and the i pointer to iterate the array and took the another array named arr to store the values after the summing of the values of array


class Solution {
  public:
      vector<int> runningSum(vector<int>& nums) {
          int n = nums.size();
          vector<int>ans;
          int digit = 0;
          for(int i=0;i<n;i++)
          {
              digit +=nums[i];
              ans.push_back(digit);
          }
          return ans;
          
      }
  };

//time complexity: O(n)
//space complexity: O(n)