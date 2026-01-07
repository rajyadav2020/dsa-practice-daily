//problem:Range sum query 
//difficulty: easy
//basicaly in this problem if we are give some range lets say from l to r then we have to compute the sum of the elements of the array from l to r , here l and r are denoting the starting and ending point

class NumArray {
  public:
  vector<int>arr;
  //here this is the prefix sum of the array 
      NumArray(vector<int>& nums) {
          
          int n = nums.size();
          int sum = 0;
          for(int i=0;i<n;i++)
          {
              sum = sum + nums[i];
              arr.push_back(sum);
          }
  
      }

      //and here is the sum that is required from starting to end
      
      int sumRange(int left, int right) {
          if(left==0)
          {
              return arr[right];
  
          }else{
              return arr[right] - arr[left-1];
          }
          
      }
  };

  //time complexity: O(n)
  //space complexity: O(n)