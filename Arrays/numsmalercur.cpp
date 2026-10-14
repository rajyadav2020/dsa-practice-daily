class Solution {
  public:
      vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
          vector<int>freq(101,0);
  
          for(int num : nums)
          {
              freq[num]++;
          }
  
          for(int i=1;i<=100;i++)
          {
              freq[i]+=freq[i-1];
          }
  
          vector<int>res;
          for(int num : nums)
          {
              if(num ==0)
              {
                  res.push_back(0);
              }
              else{
                  res.push_back(freq[num-1]);
              }
          }
          return res;
      }
  };