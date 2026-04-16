class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> a,b;
        if(s.length() != t.length())
            return false;
        for(int i=0; i<s.length(); i++){
            a[s[i]]++;
            b[t[i]]++;
        }
        return a==b;
    }
};
