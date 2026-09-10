class Solution {
  public:
      vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
         stack<int>s;
         unordered_map<int,int> ngm;
  
         for(int i=nums2.size()-1;i>=0;i--)
         {
          int curr = nums2[i];
  
          while(!s.empty() && s.top() <= curr)
          {
              s.pop();
          }
  
          if(s.empty())
          {
              ngm[curr] = -1;
  
          }else{
              ngm[curr] = s.top();
          }
  
          s.push(curr);
         } 
  
         vector<int> result(nums1.size());
         for(int i=0;i<nums1.size();i++)
         {
          result[i] = ngm[nums1[i]];
         }
  
         return result;
      }
  
  };