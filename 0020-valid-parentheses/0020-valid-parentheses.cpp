class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int n=s.length();

        for(int i=0;i<n;i++){
            if(s[i]=='('|| s[i]=='{'||s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(st.empty())
                return false;

                char first=st.top();
                if(first=='(' && s[i]==')'||
                first=='{' && s[i]=='}'||
                first=='[' && s[i]==']')
                           st.pop();
                else
                return false;
            }
        }
        return st.empty();
    }
};