class Solution {
  public:
     static bool mycustom(string x,string y){
          string X = x+y;
          string Y = y+x;
  
          return X.compare(Y)>0;
      }
  
  
      string largestNumber(vector<int>& nums) {
          vector<string>arr = {};
          int n = nums.size();
  
          for(int i=0;i<n;i++){
              arr.push_back(to_string(nums[i]));
  
          }
  
          sort(arr.begin(),arr.end(),mycustom);
  
          string answer = "";
          for(int i=0;i<n;i++){
              answer+=arr[i];
          }
  
          int i=0;
          while(i<n && answer[i] =='0'){
              i++;
                  
          }
  
          if(i==n){
              return "0";
          }
          return answer;
  
  
      }
  };