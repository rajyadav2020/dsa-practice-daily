//platform: leetcode
//dificulty: easy

//Since the array is already sorted, we use Binary Search to achieve O(log n) time complexity.
// Maintain two pointers:
// start → beginning of the array
// end → end of the array
// Repeatedly calculate mid:
// If arr[mid] == target → return mid
// If arr[mid] < target → move right (start = mid + 1)
// If arr[mid] > target → move left (end = mid - 1)
// If the target is not found, the correct insertion position will be stored in index.
// Return index after the loop ends.

//here is the code

class Solution {
  public:
      int searchInsert(vector<int>& arr, int target) {
          int mid,start = 0,end = arr.size()-1,index;
  
          while(start<=end){
              mid = (start+end)/2;
              if(arr[mid]==target)
              return mid;
              else if(arr[mid]<target){
                  start = mid+1;
                  index = mid+1;
              }
              else
              {
                  end = mid-1;
                  index = mid;
              }
          }
  
          return index;
          
      }
  };


//time complexity:o(logn)
//space complexity: o(1)