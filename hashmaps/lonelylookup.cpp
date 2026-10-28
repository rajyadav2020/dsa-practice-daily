class Solution {
  public:
      vector<int> findLonely(vector<int>& nums) {
       //approach is : first find the frequency of all the numbers if someone is appearing more than 1 time so we will ignore that one and if and element is occuring only ones so we will compare it with the prev or next element if adjacent not exist we will include that in our new array else no
       unordered_map<int,int>mp;
       for(int num: nums)
       {
          mp[num]++;
       }  
       vector<int>ans; 
  
       for(auto it= mp.begin(); it!=mp.end();it++)
       {
          int num = it->first;
          if(it->second == 1 && mp.find(num-1) == mp.end() && mp.find(num+1)==mp.end())
          {
              ans.push_back(num);
          }
       }
       return ans;
      }
  };