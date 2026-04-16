class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.length()%2 != 0)
            return false;
        char c;
        for(int i=0;i<s.length();i++){
            if(s[i]==')'||s[i]=='}'||s[i]==']'){
                if(!st.empty()){
                    c=st.top();
                    st.pop();
                    if(c=='(' && s[i]==')')
                        continue;
                    else if(c=='{' && s[i]=='}')
                        continue;
                    else if(c=='[' && s[i]==']')
                        continue;
                    else 
                        return false;
                }
                else
                    return false;
            }
            else 
                st.push(s[i]);
        }
        if(st.empty())
            return true;
        else 
            return false;
    }
};
