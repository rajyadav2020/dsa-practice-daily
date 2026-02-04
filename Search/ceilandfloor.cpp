// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        
        sort(arr.begin(),arr.end());
        int ceil = -1;
        int floor = -1;
        int n = arr.size();
        
        
        int st = 0;
        int rt = n-1;
        
        while(st<=rt){
            int mid = (st+rt)/2;
            if(arr[mid]==x){
                ceil = floor = arr[mid];
                break;
            }
            else if(arr[mid]>x){
                ceil = arr[mid];
                rt = mid-1;
                
            }else{
                floor = arr[mid];
                st = mid+1;
            }
            
        }
        return {floor,ceil};
    }
};