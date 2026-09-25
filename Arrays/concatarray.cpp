class Solution {
  public:
      vector<int> getConcatenation(vector<int>& nums) {
          int n = nums.size();
          vector<int>arr;
          for(int i=0;i < 2*n;i++)
          {
              arr.push_back(nums[i%n]);
          }
          return arr;
      }
  };