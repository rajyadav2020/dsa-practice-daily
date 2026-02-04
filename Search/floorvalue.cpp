class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int st = 0;
        int n = arr.size();
        int rt = n-1;
        int ans = -1;
        
        while(st<=rt){
            int mid = (st+rt)/2;
            if(arr[mid]<=x){
                ans = mid;
                st = mid+1;
                
            }else{
                rt = mid-1;
            }
        }
        return ans;
    }
};
