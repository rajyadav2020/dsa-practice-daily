class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        int sum = 0; //for prefix sum
        int length = 0; // this is the length of subarray
        map<int,int>mp; //we will store the prefix sum with index i
        int n = arr.size(); //size of the array
        
        mp[0] = -1;
        for(int i=0 ; i< n ;i++)
        {
            sum+=arr[i];
            
            if(mp.find(sum) !=mp.end())
            {
                length = max(length , (i - mp[sum]));
            }
            else{
                mp[sum] = i;
            }
        }
        return length;
    }
};