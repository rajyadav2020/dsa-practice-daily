//problem - gfg - count_0s,1s,2s
//Topic:Arrays
//Difficulty: Medium
//Approach: okay coming to the approach i took the countings of the number of zeros,ones and twos and then after taking the counting of them , i took the array named index and placed them there in the sorted order

class Solution {
  public:
    void sort012(vector<int>& arr) {
        int n = arr.size();
        int count_zero = 0;
        int count_one = 0;
        int count_two = 0;
        
        // Step 1: Count 0s, 1s, and 2s
        for(int i = 0; i < n; i++) {
            if(arr[i] == 0)
                count_zero++;
            else if(arr[i] == 1)
                count_one++;
            else if(arr[i] == 2)
                count_two++;
        }
        
        // Step 2: Overwrite the array
        int index = 0;
        
        while(count_zero--) {
            arr[index++] = 0;
        }
        while(count_one--) {
            arr[index++] = 1;
        }
        while(count_two--) {
            arr[index++] = 2;
        }
    }
};


//time-complexity:O(n)
//space-complexity:O(1)