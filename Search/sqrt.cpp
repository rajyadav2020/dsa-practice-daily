class Solution {
  public:
      int mySqrt(int x) {
          long long st = 1;
          long long end = x;
          long long ans = x;
  
          while(st<=end){
              long long  mid = (st+end)/2;
              if(mid*mid <=x){
                  ans = mid;
  
                  st = mid+1;
  
              }else{
                  end = mid-1;
              }
          }
  
          return (int)ans;
          
          
      }
  };