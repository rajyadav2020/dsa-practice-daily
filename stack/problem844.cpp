class Solution {
public:
    string result(string a)
    {
        stack<char> st;

        for(int i = 0; i < a.length(); i++)
        {
            if(a[i] == '#')
            {
                if(!st.empty())
                    st.pop();
            }
            else
            {
                st.push(a[i]);
            }
        }

        // Build correct order string
        string b = "";
        while(!st.empty())
        {
            b = st.top() + b; // reverse correction
            st.pop();
        }

        return b;
    }

    bool backspaceCompare(string s, string t) {
        return result(s) == result(t);
    }
};