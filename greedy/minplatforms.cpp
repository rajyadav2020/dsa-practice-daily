class Solution {
  public:
  
    int minPlatform(vector<int>& arr, vector<int>& dep) {

        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());

        int n = arr.size();

        int i = 1, j = 0;
        int platforms = 1;
        int ans = 1;

        while(i < n && j < n) {

            if(arr[i] <= dep[j]) {
                platforms++;
                i++;
            }
            else {
                platforms--;
                j++;
            }

            ans = max(ans, platforms);
        }

        return ans;
    }
};