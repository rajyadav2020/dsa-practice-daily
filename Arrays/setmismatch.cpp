
class Solution {
  public:
      vector<int> findErrorNums(vector<int>& nums) {
          long long n = nums.size();
  
          long long expectedSum = n * (n + 1) / 2;
          long long expectedSqSum =
              n * (n + 1) * (2 * n + 1) / 6;
  
          long long actualSum = 0;
          long long actualSqSum = 0;
  
          for (int num : nums) {
              actualSum += num;
              actualSqSum += 1LL * num * num;
          }
  
          long long diff = actualSum - expectedSum; 
          // diff = duplicate - missing
  
          long long sqDiff = actualSqSum - expectedSqSum;
          // sqDiff = duplicate^2 - missing^2
  
          long long sum = sqDiff / diff;
          // sum = duplicate + missing
  
          long long duplicate = (diff + sum) / 2;
          long long missing = sum - duplicate;
  
          return {(int)duplicate, (int)missing};
      }
  };
  