class Solution {
  public:
      int maxFrequencyElements(vector<int>& nums) {
          unordered_map<int,int>mp;
          for(int num:nums)
          {
              mp[num]++;
          }
          int maxfreq = 0;
          int ans = 0;
          for(auto it:mp)
          {
              if(it.second > maxfreq)
              {
                  maxfreq = it.second;
                  ans=it.second;
              }
              else if(it.second == maxfreq)
              {
                  ans+=it.second;
              }
          }
          return ans;
  
      }
  };