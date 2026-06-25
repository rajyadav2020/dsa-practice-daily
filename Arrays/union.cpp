class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        
        int n1 = a.size();
        int n2 = b.size();
        
        int i=0;
        int j=0;
        
        vector<int>result;
        
        while(i<n1 && j<n2)
        {
            if(a[i]<=b[j])
            {
                if(result.size()==0 || result.back()!=a[i])
                {
                    result.push_back(a[i]);
                }
                i++;
            }
            else
            {
                if(result.size()==0 || result.back()!=b[j])
                {
                    result.push_back(b[j]);
                }
                j++;
            }
        }
        
        while(j<n2)
        {
                if(result.size()==0 || result.back()!=b[j])
                {
                    result.push_back(b[j]);
                }
                j++;
        }
        
        while(i<n1)
        {
                if(result.size()==0 || result.back()!=a[i])
                {
                    result.push_back(a[i]);
                }
                i++;
        }
        
        return result;
        
    }
};