//problem -> Max sum of subarray of size k
//platform:gfg
//difficulty:easy
//approach: first, we will calculate the sum of first k elements
//then slide the windown one step at a time
//remove the element that goes out of the window
//track the max sum seen so far and then return it


class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        
        // Step 1: Sum of first k elements
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += arr[i];
        }
        
        int ans = sum;  // initialize with first window sum
        
        // Step 2: Slide the window
        for (int i = k; i < n; i++) {
            sum = sum + arr[i] - arr[i - k];
            ans = max(ans, sum);
        }
        
        return ans;
    }
};


//time complexity: O(N);
//space complexity: O(1);
