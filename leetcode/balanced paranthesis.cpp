class Solution {
public:
    bool isValid(string s) 
    {
        if(s=="") return true;
        stack<char> st;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==')')
            {
                if(st.size() && st.top()=='(') 
                {
                    st.pop();
                }
                else return false;
            }
            else if(s[i]==']')
            {
                if(st.size() && st.top()=='[')
                {
                    st.pop();
                }
                else return false;
            }
            else if(s[i]=='}')
            {
                if(st.size() && st.top()=='{')
                {
                    st.pop();
                }
                else return false;
            }
            else
            {
                st.push(s[i]);
            }
        }
        if(st.size()!=0) return false;
        return true;
    }
};
