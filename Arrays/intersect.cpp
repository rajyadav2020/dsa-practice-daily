class Solution {
  public:
    vector<int> intersection(vector<int> &a, vector<int> &b) {
        // code here
        int n = a.size();
        int m = b.size();
        
        int i = 0;
        int j = 0;
        
        vector<int>result;
        
        while(i<n && j<m)
        {
            
            if(a[i]<b[j])
            {
                i++;
                
            }
            else if(a[i]>b[j])
            {
                j++;
            }
            else
            {
                if(result.empty() || result.back()!=a[i] || result.back() != b[j])
                {
                    result.push_back(a[i]);
                }
                
                //move both pointers
                i++;
                j++;
            }
            
        }
        
        return result;
    }
};