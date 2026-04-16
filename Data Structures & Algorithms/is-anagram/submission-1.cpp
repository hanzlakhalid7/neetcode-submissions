class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        unordered_map<char,int> a;
        unordered_map<char,int> b;
        for(int i=0;i<s.size();i++){
            if(!a[s[i]])
                a[s[i]]=1;
            else 
                a[s[i]] += 1;
        }
        for(int i=0;i<t.size();i++){
            if(!b[t[i]])
                b[t[i]]=1;
            else 
                b[t[i]] += 1;
        }
        for(int i=0;i<s.size();i++){
            if(a[s[i]]!=b[s[i]])
                return false;
        }
        return true;
    }
};
