class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        for(int i=0;i<strs.size();i++){
            s+=strs[i];
            s+="<=>";
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> v;
        string a="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='<'&&s[i+1]=='='&&s[i+2]=='>'){
                v.push_back(a);
                a="";
                i++;
                i++;
            }
            else
                a+=s[i];
        }
        return v;
    }
};
