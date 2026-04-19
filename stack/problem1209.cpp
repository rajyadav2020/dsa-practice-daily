class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        for(int i=0;i<s.length();i++)
        {
            if(st.empty())
            {
                st.push({s[i],1});
            }
            else
            {
                if(st.top().first == s[i])
                {
                    int fre = st.top().second;
                    st.pop();

                    st.push({s[i],fre+1});
                }
                else{
                    st.push({s[i],1});
                }
            }
            if(st.top().second == k){
                st.pop();
            }
        }
        string result = "";
        while(!st.empty()){
            pair<char,int> topElement = st.top();
            st.pop();
            while(topElement.second >0)
            {
                result +=topElement.first;
                topElement.second--;
            }

        }
        reverse(result.begin(),result.end());
        return result;

    }
};