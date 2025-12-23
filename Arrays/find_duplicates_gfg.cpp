// Problem: Find duplicates in an array
// Platform: GeeksforGeeks
// Topic: Arrays
// Difficulty: Easy
// Approach: Frequency 
// Time Complexity: O(n)
// Space Complexity:  O(n) 




class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        int n = arr.size();
        vector<int> count(n + 1, 0);
        vector<int> result;

        for (int i = 0; i < n; i++) {
            count[arr[i]]++;
        }

        for (int i = 1; i <= n; i++) {
            if (count[i] > 1) {
                result.push_back(i);
            }
        }

        return result;
    }
};

/*
Explanation:
We traverse the array and mark the visited index.
If an index is already marked, it means the element is a duplicate.
*/