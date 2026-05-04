class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int>& start, vector<int>& fin) {
        // Your code here
        int n = start.size();
        vector<pair<int,int>>arr;
        
        for(int i=0;i<n;i++)
        {
            arr.push_back({fin[i],start[i]});
            
        }
        
        sort(arr.begin(),arr.end());
        
        int ans = 1;
        int pend = arr[0].first;
        
        for(int i=1;i<n;i++)
        {
            if(arr[i].second>pend)
            {
                ans++;
                pend = arr[i].first;
            }
        }
        return ans;
    }
};