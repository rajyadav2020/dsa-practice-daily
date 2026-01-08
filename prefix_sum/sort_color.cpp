// problem:Sort colors
//difficulty: medium
//platfrom: Leetcode
//Approach: Count sorting technique
//In this approach, three variables count_zero, count_one, and count_two are initialized to count the number of 0s, 1s, and 2s present in the array.

//First, the array is traversed once.

// Whenever 0 is encountered, count_zero is incremented.

// Whenever 1 is encountered, count_one is incremented.

// Whenever 2 is encountered, count_two is incremented.

// After counting, the array is overwritten in-place:

// First, count_zero number of 0s are placed.

// Then, count_one number of 1s are placed.

// Finally, count_two number of 2s are placed.

class Solution {
  public:
      void sortColors(vector<int>& arr) {
          int n = arr.size();
          int count_zero = 0;
          int count_one = 0;
          int count_two = 0;
          for(int i=0;i<n;i++)
          {
              if(arr[i]==0)
              count_zero++;
              if(arr[i]==1)
              count_one++;
              if(arr[i]==2)
              count_two++;
          }
  
          int index = 0;
          while(count_zero--){
              arr[index++] = 0;
          }
          while(count_one--)
          {
              arr[index++] =1;
          }
          while(count_two--){
              arr[index++] = 2;
          }
      }
  };

//here the time complexity is O(n)
//and space complexity is O(1)