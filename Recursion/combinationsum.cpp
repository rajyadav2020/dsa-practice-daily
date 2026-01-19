class Solution {
  public:
      vector<vector<int>>ans;
      vector<int> currentseq = {};
  
      void recursion(int target,vector<int> &candidates, int start)
      {
          if(target==0){
              answer.push_back(currentseq);
              return;
          }
          for(int i=start;i<candidates.size();i++){
              if(target>=candidates[i]){
                  currentseq.push_back(candidates[i]);
                  recursion(target - candidates[i],candidates,i);
                  currentseq.pop_back();
              }
          }
      }
      vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
          recursion(target,candidates,0);
      }
  };